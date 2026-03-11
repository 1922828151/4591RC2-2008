/*
 * func-name: ??0WeaponPattern@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1019a010
 * callers: 0x10012012
 * callees: 0x10002720
 */

GameClient::WeaponPattern *__thiscall GameClient::WeaponPattern::WeaponPattern(
        GameClient::WeaponPattern *this,
        const struct GameClient::WeaponPattern *a2)
{
  GameClient::WeaponPattern *result; // eax

  std::string::string(this, a2);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_BYTE *)this + 36) = *((_BYTE *)a2 + 36);
  *((_BYTE *)this + 37) = *((_BYTE *)a2 + 37);
  *((_BYTE *)this + 38) = *((_BYTE *)a2 + 38);
  *((float *)this + 10) = *((float *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((float *)this + 13) = *((float *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_BYTE *)this + 60) = *((_BYTE *)a2 + 60);
  sub_10002720((int)a2 + 64);
  sub_10002720((int)a2 + 80);
  *((float *)this + 24) = *((float *)a2 + 24);
  *((float *)this + 25) = *((float *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((float *)this + 29) = *((float *)a2 + 29);
  result = this;
  *((float *)this + 30) = *((float *)a2 + 30);
  *((float *)this + 31) = *((float *)a2 + 31);
  *((float *)this + 32) = *((float *)a2 + 32);
  *((float *)this + 33) = *((float *)a2 + 33);
  *((float *)this + 34) = *((float *)a2 + 34);
  *((float *)this + 35) = *((float *)a2 + 35);
  *((float *)this + 36) = *((float *)a2 + 36);
  *((float *)this + 37) = *((float *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((float *)this + 39) = *((float *)a2 + 39);
  return result;
}
