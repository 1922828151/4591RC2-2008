/*
 * func-name: ?SetCurrentRotation@ControlledEstab@GameClient@@UAEXABVMatrix@@@Z_0
 * func-address: 0x1019cfe0
 * callers: 0x10003305
 * callees: 0x10015ccb
 */

void __thiscall GameClient::ControlledEstab::SetCurrentRotation(
        GameClient::ControlledEstab *this,
        const struct Matrix *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  void (__thiscall **v5)(_DWORD *, int); // esi
  int v6; // eax
  _BYTE v7[36]; // [esp+8h] [ebp-24h] BYREF

  v3 = *((_DWORD *)this + 114);
  if ( v3 )
  {
    v4 = *(_DWORD **)(v3 + 4);
    v5 = (void (__thiscall **)(_DWORD *, int))(*v4 + 28);
    v6 = NxHelper::ToNxMat33(v7, a2);
    (*v5)(v4, v6);
  }
  GameClient::Establishment::SetCurrentRotation(this, a2);
}
