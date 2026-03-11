/*
 * func-name: ?push_stream_tocontainer@Priority_Container@IONetwork@Outpop@@QAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x10009e40
 * callers: none
 * callees: 0x1000b090, 0x1000b2b0
 */

char __thiscall Outpop::IONetwork::Priority_Container::push_stream_tocontainer(
        Outpop::Utility::Thread_Mutex *this,
        int a2)
{
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // esi
  _BYTE v11[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v12; // [esp+30h] [ebp-4h]

  v2 = Outpop::Utility::Thread_Mutex::acquire(this) - 1;
  v12 = 0;
  if ( v2 == -1 )
    return v2;
  v3 = *(_DWORD **)(a2 + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v4 = *(_DWORD **)(a2 + 8);
    if ( *(_DWORD *)(a2 + 4) > (unsigned int)v4 )
      invalid_parameter_noinfo();
    if ( v3 == v4 )
      break;
    if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    v5 = Outpop::Utility::Binary_Stream::priority(*v3) - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        if ( v6 != 2 )
          goto LABEL_21;
        if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
      }
      else if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 8) )
      {
        invalid_parameter_noinfo();
      }
    }
    else if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 8) )
    {
      invalid_parameter_noinfo();
    }
    sub_1000B090(v3);
LABEL_21:
    if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    ++v3;
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 4) > v7 )
    invalid_parameter_noinfo();
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  sub_1000B2B0(a2, v11, a2, v8, a2, v7);
  v12 = -1;
  LOBYTE(v2) = Outpop::Utility::Thread_Mutex::release(this);
  return v2;
}
