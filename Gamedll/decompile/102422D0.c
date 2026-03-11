/*
 * func-name: ??0WeaponPattern@GameClient@@QAE@XZ_0
 * func-address: 0x102422d0
 * callers: 0x10015fb4
 * callees: none
 */

GameClient::WeaponPattern *__thiscall GameClient::WeaponPattern::WeaponPattern(GameClient::WeaponPattern *this)
{
  GameClient::WeaponPattern *result; // eax

  std::string::string(this);
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  std::string::operator=(this, "BulletBase");
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  *((_BYTE *)this + 36) = 1;
  *((float *)this + 10) = 0.0;
  *((_BYTE *)this + 38) = 1;
  *((_BYTE *)this + 60) = 1;
  *((float *)this + 13) = 0.30000001;
  *((_DWORD *)this + 7) = -1;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 26) = 0;
  *((float *)this + 29) = 0.0;
  *((_DWORD *)this + 27) = 0;
  *((float *)this + 30) = 0.0;
  *((_BYTE *)this + 37) = 0;
  *((float *)this + 31) = 0.0;
  *((_DWORD *)this + 11) = 5;
  *((float *)this + 32) = 0.0;
  *((_DWORD *)this + 12) = 3;
  *((float *)this + 33) = 0.0;
  *((_DWORD *)this + 14) = 0;
  *((float *)this + 34) = 0.0;
  *((_DWORD *)this + 28) = 200;
  *((float *)this + 35) = 0.0;
  *((_DWORD *)this + 38) = 10;
  *((float *)this + 36) = 0.0;
  result = this;
  *((float *)this + 37) = 1.0;
  *((float *)this + 39) = 0.0;
  return result;
}
