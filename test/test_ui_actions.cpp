#include "catch.hpp"

SCENARIO("The play button is pressed", "[UI_ACTIONS]"){

    GIVEN("the player is on standby mode"){
        WHEN("the user holds the button for 5s"){
            THEN("The system wakes up and show the next song info"){
            }
        }
    }

    GIVEN("A song is being played"){
        WHEN("The button is pressed"){
            THEN("The song pauses at current time"){
            }
        }

        WHEN("The button is pressed twice"){
            THEN("The song is skipped"){
            }
        }
    }

    GIVEN("That there is a song paused"){
        WHEN("The play button is pressed"){
            THEN("The song continues"){
            }
        }
    }

    GIVEN("the player is on"){
        WHEN("the user holds the button for 5s"){
            THEN("The system goes to standby mode"){
            }
        }
    }


}

SCENARIO("The volume slider is being used", "[UI_ACTIONS]"){

    GIVEN("The display is in the song selection mode"){
    }

    GIVEN("A song is being played"){
    }
}
