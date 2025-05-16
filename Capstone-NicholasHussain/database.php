
<?php
$db_host = "sql9.freemysqlhosting.net";
$db_name = "sql9604322";
$db_user = "sql9604322";
$db_pass = "XRwdm6KdpS";

$conn = new mysqli($db_host, $db_user, $db_pass, $db_name);

if (!$conn) {
  die("Connection Failed: " . mysqli_connect_error());
}
/*
$sql = "
CREATE TABLE world_series (
  id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
  game_year INT(4) NOT NULL,
  game_num INT(2) NOT NULL,
  home_team VARCHAR(4) NOT NULL,
  away_team VARCHAR(4) NOT NULL
)";
*/
function create_table($conn) {
    $sql = "CREATE TABLE IF NOT EXISTS world_series (
            id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
            game_year INT(4) NOT NULL,
            game_num INT(2) NOT NULL,
            home_team VARCHAR(50) NOT NULL,
            away_team VARCHAR(50) NOT NULL,
            game_date DATE        NOT NULL
        )";

    if ($conn->query($sql) === TRUE) {
        return "";
    } else {
        throw new Exception("Error creating table: " . $conn->error);
    }
}
/*
$table_create = $sql;

if (mysqli_query($conn, $table_create)) {
  echo "Table created successfully";
} else {
  echo "Error creating table: " . mysqli_error($conn);
}
*/


