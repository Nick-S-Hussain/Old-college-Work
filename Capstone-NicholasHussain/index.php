<!DOCTYPE html>
<html>
<head>
        <meta charset="UTF-8">
                <meta name="viewport" content="width=deivce-width, intital-scale=1.0">
                <meta http-equiv="X-UA-Compatible" content="ie=edge">
        <title> Capstone Group 4 </title>
        <link rel="stylesheet" href="styles.css">
        <style>
                .button {
                display:inline-flex;
                height: 50px;

                padding: 0px;
                background: #326ded;
                border: none;
                outline: none;
                border-radius: 10px;
                overflow: hidden;
                font-family: 'Quicksand', sans-serif;
                font-size: 16px;
                font-weight: 500;
                cursor: pointer;
                margin-left: 50px;
        }
        body{
                display:flex;
                flex-direction: column;
            align-items: center;
        }
        .button__text, .button__icon{
                display: inline-flex;
                align-items: center;
                padding: 0 24px;
                height: 45px;
        }
        p{
                margin-left: 50px;
                color: white;
        }
        h1{
                font-family: 'Quicksand', sans-serif;
                font-size: 32px;
                color: gray;
                font-weight: bolder;
        }
        h3{
                font-family: 'Quicksand', sans-serif;
                font-size: 24px;
                margin-left:25px;
                color: gray;
                font-weight: bold;
        }
        h5{
                margin-left:65px;
                color: gray;
        }
        .button__icon{
                font-size: 1.5em;
                background: rgba(0,0,0,0.08);
        }
        a:link {
                text-decoration: none;
        }

        a:visited {
                text-decoration: none;
        }

        a:hover {
                text-decoration: none;
        }

        a:active {
                text-decoration: none;
        }
        </style>
</head>
<body>
        <h1> Welcome to Group 4 Capstone </h1>
        <h3> This site is here to give you former game schedules </h3>
        <p> Click the button <br>To all the league names that exist<br> and the sport it is</p>
        <a href="http://elvis.rowan.edu/~dipiet75/capstone_index.php">
                <button type="button__text" class="button">
                        <span class="button__text">All Leagues Listed</span>
                        <span class="button__icon">
                        <ion-icon name="book-outline"></ion-icon>
                        </span>
                </button>
        </a>
               <p><br><br></p>
        <p>You can go to button below<br>
           To search Baskerball games<br>
           By a specific Date:</p>

        <a href="http://elvis.rowan.edu/~shawm1/CapStone/">
                <button type="button__test" class="button">
                        <span class="button__text">Basketball Matches</span>
                        <span class="button__icon">
                        <ion-icon name="basketball-outline"></ion-icon>
                        </span>
                </button>
        </a>
                <p><br><br></p>

        <p> This Button here is to show<br>
            Soccer game Schedules<br>
            As well as who is playing</p>
        <a href="http://elvis.rowan.edu/~Strich23/Capstone/tableDB.php">
                 <button type="button__test" class="button">
                        <span class="button__text">Soccer Schedule</span>
                        <span class="button__icon">
                        <ion-icon name="football-outline"></ion-icon>
                        </span>
                </button>
        </a>
                <p><br><br></p>

        <p>This right here allows you to<br>
           search up the world series schedule<br>
           for a specific year.</p>
           <a href="realS2.php">
                <button type="button" class="button">
                        <span class="button__text">World Series</span>
                        <span class="button__icon">
                        <ion-icon name="baseball-outline"></ion-icon>
                        </span>
                </button>
        </a>
        <h5>*Only search from 2016-2022<br>
        The API only has 2016 as earliest</h5>
        <script type="module" src="https://unpkg.com/ionicons@7.1.0/dist/ionicons/ionicons.esm.js"></script>
        <script nomodule src="https://unpkg.com/ionicons@7.1.0/dist/ionicons/ionicons.js"></script>
</body>
</html>
