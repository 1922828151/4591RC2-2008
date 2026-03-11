/*
 * func-name: ?push_stream_tocontainer@Priority_Container@IONetwork@Outpop@@QAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@V?$_Vector_iterator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@5@@Z
 * func-address: 0x1000a070
 * callers: none
 * callees: 0x1000b090
 */

char __thiscall Outpop::IONetwork::Priority_Container::push_stream_tocontainer(
        Outpop::Utility::Thread_Mutex *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // eax
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // eax

  v4 = Outpop::Utility::Thread_Mutex::acquire(this) - 1;
  if ( v4 != -1 )
  {
    while ( 1 )
    {
      v6 = a2;
      v7 = *(_DWORD **)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) > (unsigned int)v7 )
      {
        invalid_parameter_noinfo();
        v6 = a2;
      }
      if ( !a3 || a3 != v6 )
        invalid_parameter_noinfo();
      if ( a4 == v7 )
      {
        LOBYTE(v4) = Outpop::Utility::Thread_Mutex::release(this);
        return v4;
      }
      if ( !a3 )
        invalid_parameter_noinfo();
      if ( (unsigned int)a4 >= *(_DWORD *)(a3 + 8) )
        invalid_parameter_noinfo();
      v8 = Outpop::Utility::Binary_Stream::priority(*a4) - 1;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( v9 )
        {
          if ( v9 != 2 )
            goto LABEL_24;
          if ( (unsigned int)a4 >= *(_DWORD *)(a3 + 8) )
            invalid_parameter_noinfo();
        }
        else if ( (unsigned int)a4 >= *(_DWORD *)(a3 + 8) )
        {
          invalid_parameter_noinfo();
        }
      }
      else if ( (unsigned int)a4 >= *(_DWORD *)(a3 + 8) )
      {
        invalid_parameter_noinfo();
      }
      sub_1000B090(a4);
LABEL_24:
      if ( (unsigned int)a4 >= *(_DWORD *)(a3 + 8) )
        invalid_parameter_noinfo();
      ++a4;
    }
  }
  return v4;
}
