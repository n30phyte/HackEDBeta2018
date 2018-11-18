//
// Created by n30phyte on 17/11/18.
//

#include <HeadlessOutput.h>
#include <sstream>

void HeadlessOutput::Update(std::vector<int> ball_location,
                            std::vector<int> paddle0_location,
                            std::vector<int> paddle1_location) {

    std::vector<std::vector<pongpipe::GameState_Pixels>>
            board(80, std::vector<pongpipe::GameState_Pixels>(80, pongpipe::GameState_Pixels::GameState_Pixels_empty));

    board[ball_location[0]][ball_location[1]] = pongpipe::GameState_Pixels::GameState_Pixels_ball;
    board[ball_location[0]][ball_location[1] + 1] = pongpipe::GameState_Pixels::GameState_Pixels_ball;

    for (auto i = -3; i < 5; i++) {
        board[paddle0_location[0]][paddle0_location[1] + i] = pongpipe::GameState_Pixels::GameState_Pixels_paddle0;
        board[paddle0_location[0] + 1][paddle0_location[1] + i] =
                pongpipe::GameState_Pixels::GameState_Pixels_paddle0;;

        board[paddle1_location[0]][paddle1_location[1] + i] = pongpipe::GameState_Pixels::GameState_Pixels_paddle1;
        board[paddle1_location[0] + 1][paddle1_location[1] + i] =
                pongpipe::GameState_Pixels::GameState_Pixels_paddle1;
    }

    std::stringstream response;
    for (int y = 0; y < 80; y++) {
        for (int x = 0; x < 80; x++) {
            std::cout << board[x][y];
        }
        std::cout << std::endl;
    }

}
HeadlessOutput::HeadlessOutput() {
}

