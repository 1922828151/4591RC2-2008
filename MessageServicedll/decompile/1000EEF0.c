/*
 * func-name: ?find_acceptor@Acceptor_Manager@Message@Outpop@@QAEAAV?$Smart_Ptr@VAcceptor@IONetwork@Outpop@@@Utility@3@G@Z
 * func-address: 0x1000eef0
 * callers: none
 * callees: 0x100083d0
 */

int *__thiscall Outpop::Message::Acceptor_Manager::find_acceptor(_DWORD *this, __int16 a2)
{
  Outpop::Utility::Lock *v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // esi
  _DWORD *v9; // [esp+14h] [ebp-18h] BYREF
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+28h] [ebp-4h]

  v3 = (Outpop::Utility::Lock *)(this + 13);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 13));
  v11 = 0;
  sub_100083D0(this + 1, &v9, &a2);
  v4 = this[3];
  v5 = this + 2;
  v6 = v9;
  if ( !v9 || v9 != v5 )
    invalid_parameter_noinfo();
  if ( v10 == v4 )
  {
    v11 = -1;
    Outpop::Utility::Lock::unlock(v3);
    return &dword_100462A4;
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
