/*
 * func-name: ?Release@PostProcessEffect_Permanent@@QAEXXZ
 * func-address: 0x10107f00
 * callers: none
 * callees: 0x10109220
 */

void __thiscall PostProcessEffect_Permanent::Release(PostProcessEffect_Permanent *this)
{
  PostProcessEffect_Permanent *v1; // edi
  unsigned int v2; // ebp
  int v3; // ebx
  char *v4; // ecx
  void *v5; // ecx
  void *v6; // esi
  unsigned int v7; // esi
  _BYTE v9[8]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = this;
  v2 = 0;
  v3 = 0;
  while ( dword_11240FFC && v2 < (dword_11241000 - (int)dword_11240FFC) >> 6 )
  {
    if ( (unsigned __int8)std::operator==<char>((char *)dword_11240FFC + v3, (char *)v1 + 20) )
    {
      v4 = (char *)dword_11240FFC;
      if ( !dword_11240FFC || v2 >= (dword_11241000 - (int)dword_11240FFC) >> 6 )
      {
        invalid_parameter_noinfo();
        v4 = (char *)dword_11240FFC;
      }
      if ( (unsigned __int8)std::operator==<char>(&v4[v3 + 28], (char *)v1 + 48) )
      {
        v5 = dword_11240FFC;
        v6 = dword_11240FFC;
        if ( (unsigned int)dword_11240FFC > dword_11241000 )
        {
          invalid_parameter_noinfo();
          v5 = dword_11240FFC;
        }
        v7 = (unsigned int)v6 + v3;
        if ( v7 > dword_11241000 || v7 < (unsigned int)v5 )
          invalid_parameter_noinfo();
        sub_10109220(v9, &PostProcessEffect_Permanent::PostProcessEffect_Permanent_Infos, v7);
        v1 = this;
      }
    }
    ++v2;
    v3 += 64;
  }
}
