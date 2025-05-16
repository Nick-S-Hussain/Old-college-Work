<!DOCTYPE html>
<html>
<head>
  <title>Sportradar API Example</title>
</head>
<body>
  <h1>Weekly Schedule</h1>
  <?php
  // API endpoint URL
  // Base api connection: https://api.sportradar.com/ - Trial for all and json for return file type.
  $url = "https://api.sportradar.com/mlb/trial/v7/en/series/2021/PST/schedule.json?api_key=p4npsetg2aawtstq9njscmth";

  // Initialize cURL session
  $curl = curl_init($url);

  // Set cURL options//////////
  curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);
  curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, false);

  // Execute cURL request
  $jsonData = curl_exec($curl);

  // Close cURL session
  curl_close($curl);

  // Use json_decode() function to convert the JSON data into a PHP array
  $data = json_decode($jsonData, true);

/*  // Print the JSON data on the screen
  echo "<pre>";
  print_r($data);
  echo "</pre>";
  */
  $finalGames = $data["series"][0]['title'];
  $games = $data["series"][0]['games'];
  echo "<h3";
  echo $finalGames;
  echo "<h3>";
  foreach($games as $gNum){
    echo '<ul>';
    echo "<li>";
    echo "<h4>";
    echo "Game Number" . $gNum;
    echo "</h4>";
    echo "</li>";
    echo "</ul>";

  }
  ?>
</body>
</html>