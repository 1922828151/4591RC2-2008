/*
 * func-name: sub_1020C040
 * func-address: 0x1020c040
 * callers: 0x1000b172
 * callees: 0x1000b50a
 */

_DWORD *__thiscall sub_1020C040(_DWORD *this, int a2, int a3, void *a4, int a5, void *a6, int a7)
{
  this[6] = 0;
  this[5] = 0;
  this[1] = 0;
  this[2] = 0;
  this[4] = 0;
  this[3] = 0;
  this[8] = a3;
  *this = &GameClient::Send_Chat_Result::`vftable';
  this[7] = a2;
  std::string::string(this + 9, a4);
  sub_1000B50A(a5);
  std::string::string(this + 20, a6);
  this[27] = a7;
  return this;
}
