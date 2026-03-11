/*
 * func-name: ??0Seat@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10127650
 * callers: 0x10003a85
 * callees: 0x100077e8, 0x100132c3
 */

GameClient::Seat *__thiscall GameClient::Seat::Seat(GameClient::Seat *this, const struct GameClient::Seat *a2)
{
  *(_DWORD *)this = &GameClient::DataObject::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = &GameClient::Seat::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  sub_100132C3((int)a2 + 28);
  std::vector<ModelFrame *>::vector<ModelFrame *>((char *)a2 + 44);
  sub_100077E8((int)a2 + 60);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((float *)this + 28) = 0.0;
  *((float *)this + 29) = 0.0;
  *((float *)this + 30) = 0.0;
  *((float *)this + 32) = 0.0;
  *((float *)this + 33) = 0.0;
  *((float *)this + 34) = 0.0;
  *((float *)this + 36) = 0.0;
  *((float *)this + 37) = 0.0;
  *((float *)this + 38) = 0.0;
  *((float *)this + 40) = 0.0;
  *((float *)this + 41) = 0.0;
  *((float *)this + 42) = 0.0;
  qmemcpy((char *)this + 112, (char *)a2 + 112, 0x5Cu);
  *((float *)this + 51) = 0.0;
  *((float *)this + 52) = 0.0;
  *((float *)this + 53) = 0.0;
  *((float *)this + 55) = 0.0;
  *((float *)this + 56) = 0.0;
  *((float *)this + 57) = 0.0;
  *((float *)this + 59) = 0.0;
  *((float *)this + 60) = 0.0;
  *((float *)this + 61) = 0.0;
  *((float *)this + 63) = 0.0;
  *((float *)this + 64) = 0.0;
  *((float *)this + 65) = 0.0;
  qmemcpy((char *)this + 204, (char *)a2 + 204, 0x8Fu);
  *((_DWORD *)this + 87) = *((_DWORD *)a2 + 87);
  return this;
}
