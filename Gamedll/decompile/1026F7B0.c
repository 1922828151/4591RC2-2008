/*
 * func-name: ?PasswordInputed@CEstablishmentUI@@QAEXJ@Z_0
 * func-address: 0x1026f7b0
 * callers: 0x10008297
 * callees: 0x1000adc6, 0x1000dafd, 0x10012e72
 */

void __thiscall CEstablishmentUI::PasswordInputed(CEstablishmentUI *this, int a2)
{
  CRECheckBox *v3; // ecx
  GameClient::EstabManager *v4; // eax
  GameClient::Establishment *Establishment; // eax
  int v6; // edi
  int v7; // edx
  unsigned int v8; // [esp-4h] [ebp-8h]

  v3 = (CRECheckBox *)*((_DWORD *)this + 976);
  *((_DWORD *)this + 969) = a2;
  CRECheckBox::SetChecked(v3, 1);
  v8 = *((_DWORD *)this + 977);
  v4 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v4, v8);
  if ( Establishment )
  {
    v6 = -1;
    v7 = *(_BYTE *)(*((_DWORD *)this + 974) + 816) != 0;
    if ( *(_BYTE *)(*((_DWORD *)this + 975) + 816) )
      v7 |= 2u;
    if ( *(_BYTE *)(*((_DWORD *)this + 976) + 816) )
    {
      v6 = *((_DWORD *)this + 969);
      v7 |= 0x20u;
    }
    GameClient::Establishment::SubmitEstabInfo(Establishment, v7, v6);
  }
}
