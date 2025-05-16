<!DOCTYPE html>
<html>
<head>
  <title>World Series Schedule</title>
        <link rel="stylesheet" href="http://elvis.rowan.edu/~hussai12/Capstone/styles.css" >
        <style>
        h1{color:White;}

        .container {
        background-color: gray;
        padding: 30px;
        box-shadow: 0 4px 6px rgba(204, 204, 204, 0.5);
        border-radius: 8px;
        text-align: center;
    }
img.team-logo {
       max-height: 50px;
       max-width: 50px;
   }
   .toolbar {
       background-color: #f1f1f1;
       border: 1px solid #ccc;
       padding: 10px;
       text-align: center;
   }
   .toolbar a {
       text-decoration: none;
       color: #000;
       padding: 8px 16px;
   }
   .toolbar a:hover {
       background-color: #ddd;
   }

</style>
</head>
<body>
 <div class="container">
        <div class="toolbar">
           <a href="http://elvis.rowan.edu/~hussai12/Capstone/">Home</a>
           <a href="http://elvis.rowan.edu/~dipiet75/capstone_index.php">Football</a>
           <a href="http://elvis.rowan.edu/~Strich23/Capstone/tableDB.php">Soccer</a>
           <a href="http://elvis.rowan.edu/~shawm1/CapStone/">Basketball</a>
           <a href="http://elvis.rowan.edu/~hussai12/Capstone/realS2.php">Baseball</a>
        </div>
  <h1>World Series Schedule</h1>
  <?php
//ini_set('display_errors', 1);
//ini_set('display_startup_errors', 1);
//error_reporting(E_ALL);


  // Include database.php to establish a database connection
//echo "Before connection";
  require_once('database.php');
//echo "After Connection";
try{
        echo create_table($conn);
}catch (Exception $e){
        echo "Eroor creating table: " . e->getMessage();
}
 // Get the selected year from the form submission
 $year = $_POST['year'];
 //echo $year;
   // API key and URL
   $APIkey = "p4npsetg2aawtstq9njscmth";
   $url = "https://api.sportradar.com/mlb/trial/v7/en/series/$year/PST/schedule.json?api_key=$APIkey";
 
   // Initialize cURL session
   $curl = curl_init($url);
 
   // Set cURL options
   curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);
   curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, false);
 
   // Execute cURL request
   $jsonData = curl_exec($curl);
 
   // Close cURL session
   curl_close($curl);
 
   // Use json_decode() function to convert the JSON data into a PHP array
   $data = json_decode($jsonData, true);
 
   // Prepare and execute SQL statement to insert data into the database
   $stmt = $conn->prepare("INSERT INTO world_series (game_year, game_num, home_team, away_team, game_date) VALUES (?, ?, ?, >
 
 $gameCounter = 0;$seriesNum = 0;$seriesLoopNum=0;
 
 foreach($data['series'] as $worldCheck){
         //echo "<p>" . $data['series'][$seriesNum]['title'] . $seriesNum . "</p>";
         if(str_contains($data['series'][$seriesNum]['title'], "World Series")){
                  //echo $seriesNum;
                 $seriesLoopNum = $seriesNum;
                 break;
         }
         $seriesNum++;
 }
 foreach ($data['series'][$seriesLoopNum]['games'] as $game) {
          $gameCounter++;
          $game_year = $data['season']['year'];
                 //echo $game_year;
          $game_num = $gameCounter-1;
                 //echo $game_num;
         $home_team = $data['series'][$seriesLoopNum]['games'][$gameCounter-1]['home']['abbr'];
                         //echo $home_team;
         $away_team = $data['series'][$seriesLoopNum]['games'][$gameCounter-1]['away']['abbr'];
                         //echo $away_team;
         $game_date = date('Y-m-d',strtotime($data['series'][$seriesLoopNum]['games'][$gameCounter-1]['scheduled']));
         $stmt->bind_param("iisss", $game_year, $game_num, $home_team, $away_team, $game_date);
         $stmt->execute();
 
 }
 
   $stmt->close();
 
   // Retrieve data from the database and display it
   $result = $conn->query("SELECT DISTINCT game_year,game_num, home_team, away_team, game_date FROM world_series ORDER BY ga>
 
   if ($result->num_rows >0){
     echo "<table>";
     echo "<tr><th>Year</th><th>Game Number</th><th>Home Team</th><th>Away Team</th><th>Game Date</th></tr>";
     while ($row = $result->fetch_assoc()) {
        echo "<tr>";
        echo "<td>" . $row['game_year'] . "</td>";
          $true_num = $row['game_num'] + 1;
        echo "<td>" . $true_num . "</td>";
        echo "<td>" . $row['home_team'] . "</td>";
        echo "<td>" . $row['away_team'] . "</td>";
          echo "<td>" . $row['game_date'] . "</td>";
          echo "</tr>";
          }
  echo "</table>";
  }else {
  echo "No results";
  }
  
  $conn->close();
  ?>
  </div>
  </body>
  </html>
  