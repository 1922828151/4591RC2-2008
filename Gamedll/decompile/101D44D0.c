/*
 * func-name: ??0FSLock@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d44d0
 * callers: 0x10019fc4
 * callees: 0x1001ac76
 */

GameClient::FSLock *__thiscall GameClient::FSLock::FSLock(
        GameClient::FSLock *this,
        const struct GameClient::FSLock *a2)
{
  GameClient::FSLock *result; // eax

  GameClient::FSkill::FSkill(this, a2);
  *(_DWORD *)this = &GameClient::FSLock::`vftable';
  *((_DWORD *)this + 175) = *((_DWORD *)a2 + 175);
  *((_DWORD *)this + 176) = *((_DWORD *)a2 + 176);
  *((float *)this + 177) = *((float *)a2 + 177);
  result = this;
  *((float *)this + 178) = *((float *)a2 + 178);
  return result;
}
