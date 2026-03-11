/*
 * func-name: ??1ShaderVar@@QAE@XZ
 * func-address: 0x1000d3d0
 * callers: 0x10003a50, 0x10008f60, 0x1001f770, 0x1003a4c0, 0x10040990, 0x1005ddc0, 0x100e4420, 0x100e4db0, 0x10122e00, 0x10123eb0, 0x1012fc10, 0x1012ffd0
 * callees: 0x10122bb0
 */

void __thiscall ShaderVar::~ShaderVar(ShaderVar *this)
{
  void *v2; // ecx
  unsigned int i; // esi
  void *v4; // edi
  unsigned int v5; // esi
  int v6; // eax

  ShaderVar::Destroy(this);
  v2 = dword_112417C0;
  for ( i = 0; dword_112417C0 && i < (dword_112417C4 - (int)dword_112417C0) >> 2; ++i )
  {
    if ( this == *((ShaderVar **)dword_112417C0 + i) )
    {
      v4 = dword_112417C0;
      if ( (unsigned int)dword_112417C0 > dword_112417C4 )
      {
        invalid_parameter_noinfo();
        v2 = dword_112417C0;
      }
      v5 = (unsigned int)v4 + 4 * i;
      if ( v5 > dword_112417C4 || v5 < (unsigned int)v2 )
        invalid_parameter_noinfo();
      v6 = (int)(dword_112417C4 - (v5 + 4)) >> 2;
      if ( v6 > 0 )
        memmove_s((void *const)v5, 4 * v6, (const void *const)(v5 + 4), 4 * v6);
      dword_112417C4 -= 4;
      break;
    }
  }
  std::string::~string((char *)this + 32);
  std::string::~string((char *)this + 4);
}
