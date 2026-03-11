/*
 * func-name: ?SetCurrentPosition@ControlledEstab@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x1019c8d0
 * callers: 0x10019ac4
 * callees: 0x1000de3b
 */

void __thiscall GameClient::ControlledEstab::SetCurrentPosition(
        GameClient::ControlledEstab *this,
        const struct Vector *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  void (__thiscall **v5)(_DWORD *, int); // esi
  int v6; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = *((_DWORD *)this + 114);
  if ( v3 )
  {
    v4 = *(_DWORD **)(v3 + 4);
    v5 = (void (__thiscall **)(_DWORD *, int))(*v4 + 24);
    v6 = NxHelper::ToNxVec3(v7, a2);
    (*v5)(v4, v6);
  }
  GameClient::Establishment::SetCurrentPosition(this, a2);
}
