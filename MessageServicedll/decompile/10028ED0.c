/*
 * func-name: ?on_channel_build@Remote_Event_Manager@Message@Outpop@@QAEXHHH@Z
 * func-address: 0x10028ed0
 * callers: 0x1000e370, 0x10013610
 * callees: 0x10028ae0, 0x10029110
 */

void __thiscall Outpop::Message::Remote_Event_Manager::on_channel_build(
        Outpop::Message::Remote_Event_Manager *this,
        int a2,
        int a3,
        int a4)
{
  int v5; // ebx
  char *v6; // eax
  char *v7; // esi
  int v8; // edi
  Outpop::Message::Remote_Event_Stub **v9; // esi
  Outpop::Message::Remote_Event_Stub **v10; // ebx
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  char *v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h]

  v11 = a3;
  sub_10029110(&v12, &v11);
  v5 = *((_DWORD *)this + 3);
  v6 = (char *)this + 8;
  v7 = v12;
  if ( !v12 || v12 != v6 )
    invalid_parameter_noinfo();
  v8 = v13;
  if ( v13 != v5 )
  {
    if ( !v7 )
      invalid_parameter_noinfo();
    if ( v8 == *((_DWORD *)v7 + 1) )
      invalid_parameter_noinfo();
    v9 = *(Outpop::Message::Remote_Event_Stub ***)(v8 + 16);
    if ( (unsigned int)v9 > *(_DWORD *)(v8 + 20) )
      invalid_parameter_noinfo();
    while ( 1 )
    {
      v10 = *(Outpop::Message::Remote_Event_Stub ***)(v8 + 20);
      if ( *(_DWORD *)(v8 + 16) > (unsigned int)v10 )
        invalid_parameter_noinfo();
      if ( v9 == v10 )
        break;
      if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 20) )
        invalid_parameter_noinfo();
      Outpop::Message::Remote_Event_Stub::on_channel_build(*v9, a2);
      if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 20) )
      {
        invalid_parameter_noinfo();
        if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 20) )
        {
          invalid_parameter_noinfo();
          if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 20) )
          {
            invalid_parameter_noinfo();
            if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 20) )
            {
              invalid_parameter_noinfo();
              if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 20) )
                invalid_parameter_noinfo();
            }
          }
        }
      }
      ++v9;
    }
  }
}
