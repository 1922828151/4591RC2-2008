/*
 * func-name: ?string_to_add@INET_Addr@IONetwork@Outpop@@UAEHQBD@Z
 * func-address: 0x100026d0
 * callers: none
 * callees: 0x10002880, 0x10002950, 0x100029d0
 */

int __thiscall Outpop::IONetwork::INET_Addr::string_to_add(Outpop::IONetwork::INET_Addr *this, char *String)
{
  char *v3; // ebp
  char *v4; // edi
  u_short v5; // cx
  int v7; // esi
  const char *v8; // edi
  unsigned __int16 v9; // ax
  int v10; // esi
  int v11; // esi

  v3 = strdup(String);
  v4 = strrchr(v3, 58);
  String = 0;
  if ( v4 )
  {
    *v4 = 0;
    v8 = v4 + 1;
    v9 = strtol(v8, &String, 10);
    if ( !v8 || *String )
    {
      v11 = Outpop::IONetwork::INET_Addr::set(this, v8, v3, "tcp");
      free(v3);
      return v11;
    }
    else
    {
      v10 = Outpop::IONetwork::INET_Addr::set(this, v9, v3, 1, 0);
      free(v3);
      return v10;
    }
  }
  else
  {
    v5 = strtol(v3, &String, 10);
    if ( !v5 || *String )
    {
      v7 = Outpop::IONetwork::INET_Addr::set(this, v3, 0, "tcp");
      free(v3);
      return v7;
    }
    else
    {
      if ( *((_DWORD *)this + 1) == 2 )
      {
        *((_DWORD *)this + 1) = 2;
        *((_WORD *)this + 6) = 2;
        *((_DWORD *)this + 2) = 16;
        *((_DWORD *)this + 4) = 0;
      }
      *((_WORD *)this + 7) = htons(v5);
      free(v3);
      return 0;
    }
  }
}
