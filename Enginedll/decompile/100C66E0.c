/*
 * func-name: ?AddNestedDialog@CTYDialog@@IAEXHHH@Z
 * func-address: 0x100c66e0
 * callers: 0x100c9fa0, 0x100c9ff0
 * callees: 0x100d2db0
 */

void __thiscall CTYDialog::AddNestedDialog(CTYDialog *this, int a2, int a3, int a4)
{
  unsigned int v4; // edi
  char *v5; // esi
  int i; // ebx
  int v7; // eax
  int v8; // eax
  _DWORD v9[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = 0;
  v5 = (char *)this + 3752;
  for ( i = 0; ; i += 12 )
  {
    v7 = *((_DWORD *)v5 + 1);
    if ( !v7 || v4 >= (*((_DWORD *)v5 + 2) - v7) / 12 )
      break;
    v8 = *((_DWORD *)v5 + 1);
    if ( !v8 || v4 >= (*((_DWORD *)v5 + 2) - v8) / 12 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(i + *((_DWORD *)v5 + 1)) == a2 )
      return;
    ++v4;
  }
  v9[1] = a3;
  v9[0] = a2;
  v9[2] = a4;
  sub_100D2DB0((int)v5, v9);
}
