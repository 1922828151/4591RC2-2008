/*
 * func-name: ??0WorldObject@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10058eb0
 * callers: 0x10011d1a
 * callees: 0x1000252c
 */

GameClient::WorldObject *__thiscall GameClient::WorldObject::WorldObject(
        GameClient::WorldObject *this,
        const struct GameClient::WorldObject *a2)
{
  *(_DWORD *)this = &GameClient::DataObject::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = &GameClient::WorldObject::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
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
  qmemcpy((char *)this + 36, (char *)a2 + 36, 0x41u);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_BYTE *)this + 116) = *((_BYTE *)a2 + 116);
  sub_1000252C((int)a2 + 120);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  return this;
}
