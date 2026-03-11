/*
 * func-name: ?AutoUse@Equip@GameClient@@UAE_NABVVector@@0@Z_0
 * func-address: 0x10159410
 * callers: 0x100053f3
 * callees: none
 */

int __thiscall GameClient::Equip::AutoUse(GameClient::Equip *this, const struct Vector *a2, const struct Vector *a3)
{
  int v3; // edx

  *((_DWORD *)this + 41) = *(_DWORD *)a2;
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 38) = *(_DWORD *)a3;
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 1);
  v3 = *(_DWORD *)this;
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 2);
  return (*(int (**)(void))(v3 + 128))();
}
