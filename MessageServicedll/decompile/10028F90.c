/*
 * func-name: ?on_channel_error@Remote_Event_Manager@Message@Outpop@@QAEXHHH@Z
 * func-address: 0x10028f90
 * callers: 0x10010a20
 * callees: 0x10029110
 */

void __thiscall Outpop::Message::Remote_Event_Manager::on_channel_error(
        Outpop::Message::Remote_Event_Manager *this,
        int a2,
        int a3,
        int a4)
{
  Outpop::Message::Remote_Event_Manager *v5; // ebx
  int v6; // edi
  int v7; // esi
  unsigned int v8; // edi
  int v9; // esi
  unsigned int v10; // ebx
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  Outpop::Message::Remote_Event_Manager *v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h]

  v11 = a3;
  sub_10029110(&v12, &v11);
  v5 = v12;
  v6 = *((_DWORD *)this + 3);
  if ( !v12 || v12 != (Outpop::Message::Remote_Event_Manager *)((char *)this + 8) )
    invalid_parameter_noinfo();
  v7 = v13;
  if ( v13 != v6 )
  {
    if ( !v5 )
      invalid_parameter_noinfo();
    if ( v7 == *((_DWORD *)v5 + 1) )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(v7 + 16);
    v9 = v7 + 12;
    if ( v8 > *(_DWORD *)(v9 + 8) )
      invalid_parameter_noinfo();
    while ( 1 )
    {
      if ( v13 == *((_DWORD *)v5 + 1) )
        invalid_parameter_noinfo();
      v10 = *(_DWORD *)(v9 + 8);
      if ( *(_DWORD *)(v9 + 4) > v10 )
        invalid_parameter_noinfo();
      if ( v8 == v10 )
        return;
      if ( v8 >= *(_DWORD *)(v9 + 8) )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)v8 + 24) != a2 )
        goto LABEL_24;
      if ( v8 >= *(_DWORD *)(v9 + 8) )
      {
        invalid_parameter_noinfo();
        if ( v8 >= *(_DWORD *)(v9 + 8) )
        {
          invalid_parameter_noinfo();
          if ( v8 >= *(_DWORD *)(v9 + 8) )
          {
            invalid_parameter_noinfo();
            if ( v8 >= *(_DWORD *)(v9 + 8) )
              break;
          }
        }
      }
LABEL_26:
      v5 = v12;
      v8 += 4;
    }
    invalid_parameter_noinfo();
LABEL_24:
    if ( v8 >= *(_DWORD *)(v9 + 8) )
      invalid_parameter_noinfo();
    goto LABEL_26;
  }
}
