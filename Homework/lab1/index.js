var tracker = require("./tracker/trackerService.js");

var activities = [ {activity: "walking", weight: 150, distance: 3, time: 45}, { activity: "running", weight: 200 , distance: 4, time: 40}, {activity: "running", weight: 175, distance: 5, time: 45}, {activity: "running", weight: 140, distance: 10, time: 240} ]

function sampleFunction(){
    console.log("******************************************");
}

function outputs(x)
{
    
    console.log("Activity : "+ x);
    if(x==0){
        console.log("Walking");
    }
    else if(x==1)
    {
        console.log("Running");
    }
    console.log("Weight: "+ activities[x].weight+" lbs");
    console.log("Speed: "+tracker.calcSpeed(activities[x].distance,activities[x].time)+" miles per hour");
    console.log("Calories burned "+tracker.calcWalkCal(activities[x].weight,activities[x].distance));
}
sampleFunction();
outputs(0);
sampleFunction();
outputs(1);
sampleFunction();
