/*
 * func-name: sub_10217F30
 * func-address: 0x10217f30
 * callers: 0x1000ed63
 * callees: 0x100012e9, 0x100093fe, 0x102c9d50
 */

int __thiscall sub_10217F30(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // esi

  *this = &GameClient::UserStageStateLogin::`vftable';
  v2 = this[21];
  v3 = this + 20;
  if ( v2 )
  {
    sub_100093FE(v2, this[22]);
    operator delete((void *)v3[1]);
  }
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  std::string::~string(this + 10);
  std::string::~string(this + 3);
  return sub_100012E9();
}
