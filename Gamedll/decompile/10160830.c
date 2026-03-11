/*
 * func-name: ?SetTriggerLoc@Interactable@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x10160830
 * callers: 0x10002199
 * callees: none
 */

void __thiscall GameClient::Interactable::SetTriggerLoc(GameClient::Interactable *this, const struct Vector *a2)
{
  int v3; // edi
  int v4; // eax
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 2) )
  {
    v3 = **((_DWORD **)this + 2);
    v4 = NxHelper::ToNxVec3(v5, a2);
    (*(void (__thiscall **)(_DWORD, int))(v3 + 24))(*((_DWORD *)this + 2), v4);
  }
}
