/*
 * func-name: ?get_is_have_stream@Sequence_Container@IONetwork@Outpop@@QAEXPA_N00@Z
 * func-address: 0x1003cff0
 * callers: 0x1002f880, 0x10031430, 0x1003d1a0, 0x10044fd0
 * callees: 0x1003da30
 */

char __thiscall Outpop::IONetwork::Sequence_Container::get_is_have_stream(
        Outpop::IONetwork::Sequence_Container *this,
        bool *a2,
        bool *a3,
        bool *a4)
{
  int v5; // eax
  int v6; // edi
  int v7; // edi
  char *v8; // eax
  int v9; // esi
  int v11; // [esp+10h] [ebp-3Ch] BYREF
  int v12; // [esp+14h] [ebp-38h] BYREF
  int v13; // [esp+18h] [ebp-34h] BYREF
  Outpop::Utility::Thread_Mutex *v14; // [esp+1Ch] [ebp-30h]
  int v15; // [esp+20h] [ebp-2Ch]
  _DWORD v16[2]; // [esp+24h] [ebp-28h] BYREF
  _DWORD v17[2]; // [esp+2Ch] [ebp-20h] BYREF
  _DWORD v18[3]; // [esp+34h] [ebp-18h] BYREF
  int v19; // [esp+48h] [ebp-4h]

  v14 = (Outpop::IONetwork::Sequence_Container *)((char *)this + 4);
  v5 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Sequence_Container *)((char *)this + 4)) - 1;
  v15 = v5;
  v19 = 0;
  if ( v5 != -1 )
  {
    if ( *((_DWORD *)this + 42) )
    {
      *a2 = 1;
    }
    else
    {
      v11 = (unsigned __int16)(*((_WORD *)this + 19) + 1);
      sub_1003DA30(v16, &v11);
      v6 = *((_DWORD *)this + 32);
      if ( !v16[0]
        || (Outpop::IONetwork::Sequence_Container *)v16[0] != (Outpop::IONetwork::Sequence_Container *)((char *)this + 124) )
      {
        invalid_parameter_noinfo();
      }
      *a2 = v16[1] != v6;
    }
    if ( *((_DWORD *)this + 41) )
    {
      *a3 = 1;
    }
    else
    {
      v12 = (unsigned __int16)(*((_WORD *)this + 18) + 1);
      sub_1003DA30(v17, &v12);
      v7 = *((_DWORD *)this + 22);
      if ( !v17[0]
        || (Outpop::IONetwork::Sequence_Container *)v17[0] != (Outpop::IONetwork::Sequence_Container *)((char *)this + 84) )
      {
        invalid_parameter_noinfo();
      }
      *a3 = v17[1] != v7;
    }
    if ( *((_DWORD *)this + 40) )
    {
      *a4 = 1;
    }
    else
    {
      v13 = (unsigned __int16)(*((_WORD *)this + 17) + 1);
      sub_1003DA30(v18, &v13);
      v8 = (char *)this + 44;
      v9 = *((_DWORD *)this + 12);
      if ( !v18[0] || (char *)v18[0] != v8 )
        invalid_parameter_noinfo();
      *a4 = v18[1] != v9;
    }
    v19 = -1;
    v15 = -1;
    LOBYTE(v5) = Outpop::Utility::Thread_Mutex::release(v14);
  }
  return v5;
}
