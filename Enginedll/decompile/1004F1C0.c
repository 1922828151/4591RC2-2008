/*
 * func-name: ?RemoveFromExcludeList@Actor@@QAEXPBD@Z
 * func-address: 0x1004f1c0
 * callers: none
 * callees: 0x100246c0
 */

void __thiscall Actor::RemoveFromExcludeList(Actor *this, const char *a2)
{
  int v3; // ebp
  unsigned int v4; // ebx
  int *v5; // esi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edi
  int v10; // [esp+18h] [ebp-30h] BYREF
  _BYTE v11[28]; // [esp+20h] [ebp-28h] BYREF
  int v12; // [esp+44h] [ebp-4h]

  std::string::string(v11, a2);
  v3 = 0;
  v4 = 0;
  v12 = 0;
  v5 = (int *)((char *)this + 336);
  while ( 1 )
  {
    v6 = v5[1];
    if ( !v6 || v4 >= (v5[2] - v6) / 28 )
      break;
    v7 = v5[1];
    if ( !v7 || v4 >= (v5[2] - v7) / 28 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(v3 + v5[1], v11) )
    {
      v8 = v5[1];
      if ( v8 > v5[2] )
        invalid_parameter_noinfo();
      v9 = v3 + v8;
      if ( v9 > v5[2] || v9 < v5[1] )
        invalid_parameter_noinfo();
      sub_100246C0(v5, &v10, (int)v5, v9);
      --v4;
      v3 -= 28;
    }
    ++v4;
    v3 += 28;
  }
  v12 = -1;
  std::string::~string(v11);
}
