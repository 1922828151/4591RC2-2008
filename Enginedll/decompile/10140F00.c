/*
 * func-name: ?CreateTriangleMesh@NxPhysics@@QAEPAVNxTriangleMesh@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10140f00
 * callers: 0x10141cd0
 * callees: 0x10148ee0, 0x101a2534
 */

int __thiscall NxPhysics::CreateTriangleMesh(_DWORD **this, int a2)
{
  char *v3; // eax
  int v4; // esi
  int v5; // edi
  bool v6; // zf
  _BYTE v8[28]; // [esp+Ch] [ebp-28h] BYREF
  int v9; // [esp+30h] [ebp-4h]
  void *v10; // [esp+38h] [ebp+4h]

  std::operator+<char>(v8, a2, ".240physx");
  v9 = 0;
  v10 = operator new(8u);
  LOBYTE(v9) = 1;
  if ( v10 )
  {
    v3 = (char *)std::string::c_str(v8);
    v4 = sub_10148EE0(v3, 1);
  }
  else
  {
    v4 = 0;
  }
  v5 = 0;
  v6 = *(_DWORD *)(v4 + 4) == 0;
  LOBYTE(v9) = 0;
  if ( !v6 )
    v5 = (*(int (__thiscall **)(_DWORD *, int))(*this[2] + 32))(this[2], v4);
  (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  v9 = -1;
  std::string::~string(v8);
  return v5;
}
