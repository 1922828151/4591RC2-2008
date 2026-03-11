/*
 * func-name: sub_10012090
 * func-address: 0x10012090
 * callers: 0x10011820, 0x10011910
 * callees: 0x10012120, 0x100232b0
 */

int __usercall sub_10012090@<eax>(int a1@<eax>, SOCKET *a2@<ecx>, int a3, _DWORD *a4)
{
  int v4; // esi
  bool v5; // zf
  int v7; // eax
  bool v8; // sf
  int v10; // [esp+Ch] [ebp-4h]

  v4 = a1;
  v5 = a1 == 0;
  v7 = 1;
  v10 = 0;
  if ( v5 )
    goto LABEL_10;
  while ( 1 )
  {
    v8 = v7 < 0;
    if ( v7 <= 0 )
      break;
    if ( sub_10012120() )
    {
      v7 = 0;
    }
    else
    {
      v7 = recv(*a2, (char *)(v10 + a3), v4, 0);
      v4 -= v7;
      v10 += v7;
    }
    if ( !v4 )
    {
      v8 = v7 < 0;
      break;
    }
  }
  if ( !v8 )
  {
LABEL_10:
    *a4 = v10;
    return 0;
  }
  else
  {
    *a4 = 0;
    return -995;
  }
}
