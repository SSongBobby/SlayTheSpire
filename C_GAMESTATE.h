#pragma once
class C_GAMESTATE       // ���� ���� ����
{
public:
    void init();
    void setIsPlaying(bool _isPlaying) { isPlaying = _isPlaying; }
    bool getIsPlaying() { return isPlaying; }

private:
    bool isPlaying;
};

