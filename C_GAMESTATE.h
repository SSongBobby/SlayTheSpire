#pragma once
class C_GAMESTATE       // 현재 게임 상태
{
public:
    void init();
    void setIsPlaying(bool _isPlaying) { isPlaying = _isPlaying; }
    bool getIsPlaying() { return isPlaying; }

private:
    bool isPlaying;
};

