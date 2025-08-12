#include <stdio.h>
#include <unistd.h> // usleep

int main() {
    const char *frames[] = {
        // Standing ready
        "     ⚽         🥅\n"
        "   (O_O)       | |\n"
        "   <)  )╯      | |\n"
        "   /  \\        | |\n",

        // Leap start
        "     ⚽         🥅\n"
        "   (O_O)       | |\n"
        "   <)  )╯      | |\n"
        "    / \\        | |\n",

        // Mid-air twist
        "       ⚽       🥅\n"
        "    \\(O_O)     | |\n"
        "     (  (>     | |\n"
        "      \\ /      | |\n",

        // Impact frame (foot connects with ball)
        "        (O_O)  🥅\n"
        "         )  )>-⚽| |\n"
        "        /  \\   | |\n"
        "              | |\n",

        // Ball flying to goal
        "            ⚽  🥅\n"
        "       (O_O)   | |\n"
        "        )  )╯  | |\n"
        "       /  \\    | |\n",

        // Goal frame
        "               🥅⚽\n"
        "       (O_O)   | |\n"
        "        )  )╯  | |\n"
        "       /  \\    | |\n"
        "         GOAL!!!"
    };

    int num_frames = sizeof(frames) / sizeof(frames[0]);

    for (int i = 0; i < num_frames; i++) {
        printf("\033[2J\033[1;1H"); // clear screen
        printf("%s\n", frames[i]);
        usleep(350000); // delay between frames
    }

    return 0;
}
