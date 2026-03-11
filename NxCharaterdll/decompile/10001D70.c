/*
 * func-name: sub_10001D70
 * func-address: 0x10001d70
 * callers: none
 * callees: none
 */

void __thiscall sub_10001D70(char *this, char a2)
{
  char *v2; // ecx
  int v3; // eax

  v2 = this + 8;
  if ( *((_DWORD *)v2 + 66) )
  {
    v3 = **((_DWORD **)v2 + 66);
    if ( a2 )
      (*(void (__stdcall **)(int))(v3 + 104))(1);
    else
      (*(void (__stdcall **)(int))(v3 + 100))(1);
  }
}
