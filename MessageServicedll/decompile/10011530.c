/*
 * func-name: ?find_channel@Channel_Manager@Message@Outpop@@QAEAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@H@Z
 * func-address: 0x10011530
 * callers: 0x10010360, 0x10011490, 0x10011620, 0x10011f00, 0x10011fa0, 0x10020fa0, 0x100211a0, 0x100213b0, 0x10021840
 * callees: 0x100222f0
 */

int *__thiscall Outpop::Message::Channel_Manager::find_channel(_DWORD *this, char a2)
{
  Outpop::Utility::Lock *v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // esi
  _DWORD *v9; // [esp+14h] [ebp-18h] BYREF
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+28h] [ebp-4h]

  v3 = (Outpop::Utility::Lock *)(this + 16);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 16));
  v11 = 0;
  sub_100222F0(&v9, &a2);
  v4 = this[24];
  v5 = this + 23;
  v6 = v9;
  if ( !v9 || v9 != v5 )
    invalid_parameter_noinfo();
  if ( v10 == v4 )
  {
    v11 = -1;
    Outpop::Utility::Lock::unlock(v3);
    return &dword_100462A8;
  }
  else
  {
    if ( !v6 )
      invalid_parameter_noinfo();
    if ( v10 == v6[1] )
      invalid_parameter_noinfo();
    v7 = v10 + 12;
    v11 = -1;
    Outpop::Utility::Lock::unlock(v3);
    return (int *)v7;
  }
}
