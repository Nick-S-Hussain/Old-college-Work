<?php
/**
* Get the databasee connection
*
*	@return object Connection to MySql server
*/


function getDB() {
	$db_host = "localhost";
	$db_name = "hussai12";
	$db_user = "hussai12";
	$db_pass = "1BLaCK4tIGer!";
	//not good practice because password is visible


	$conn = mysqli_connect($db_host, $db_user, $db_pass, $db_name);

	if(mysqli_connect_error()){
		echo mysqli_connect_error(); 
		exit;
	}
	
	return $conn;
}	