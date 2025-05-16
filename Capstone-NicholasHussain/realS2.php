<!DOCTYPE html>
<html>
<head>
        <link rel="stylesheet" href="styles.css">
<style>label{color:white;}
        h1{color:white;}
body{
                display:flex;
                flex-direction: column;
            align-items: center;
        }

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
  <title>World Series Schedule</title>
</head>
<body>
 <div class="container">
        <div class="toolbar">
           <a href="http://elvis.rowan.edu/~hussai12/Capstone/">Home</a>
           <a href="http://elvis.rowan.edu/~dipiet75/capstone_index.php">Football</a>
           <a href="http://elvis.rowan.edu/~Strich23/Capstone/tableDB.php">Soccer</a>
           <a href="http://elvis.rowan.edu/~shawm1/CapStone/">Basketball</a>
           <a href="http://elvis.rowan.edu/~hussai12/Capstone/world_series.php">World Series Full List</a>
       </div>
  <h1>World Series Schedule</h1>
  <form action="stage3.php" method="post">
    <label for="year">Enter a year:</label>
    <input type="number" name="year" id="year" required>
    <input type="submit" value="Submit">
  </form>
</div>
</body>
</html>

