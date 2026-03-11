/*
 * func-name: ??0WorldObject@GameClient@@QAE@K@Z_0
 * func-address: 0x1019adb0
 * callers: 0x10016fef
 * callees: 0x100081ed, 0x102c1270, 0x102c9ea2
 */

GameClient::WorldObject *__thiscall GameClient::WorldObject::WorldObject(
        GameClient::WorldObject *this,
        unsigned int a2)
{
  GameClient::WorldObject *result; // eax

  GameClient::DataObject::DataObject(this);
  *(_DWORD *)this = &GameClient::WorldObject::`vftable';
  *((_DWORD *)this + 3) = a2;
  *((float *)this + 6) = 0.0;
  *((float *)this + 7) = 0.0;
  *((float *)this + 8) = 0.0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 10) = 0.0;
  *((float *)this + 11) = 0.0;
  *((float *)this + 13) = 0.0;
  *((float *)this + 14) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 17) = 0.0;
  *((float *)this + 18) = 0.0;
  *((float *)this + 19) = 0.0;
  *((float *)this + 21) = 0.0;
  *((float *)this + 22) = 0.0;
  *((float *)this + 23) = 0.0;
  memset((char *)this + 36, 0, 0x40u);
  sub_102C1270(1.0);
  *((float *)this + 24) = 1.0;
  result = this;
  *((_BYTE *)this + 100) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 28) = 32;
  *((_BYTE *)this + 116) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  return result;
}
