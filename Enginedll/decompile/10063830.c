/*
 * func-name: ?BoxInFrustum@Camera@@QAEHABVBBox@@_N1@Z
 * func-address: 0x10063830
 * callers: 0x1007f560, 0x10080700, 0x100a0e10, 0x100efe90, 0x100f0470, 0x100f04f0, 0x100f15b0, 0x10101a60, 0x10102180, 0x10104050, 0x101042c0, 0x10128c50, 0x10139150, 0x10139890
 * callees: 0x10063350, 0x100636d0
 */

int __thiscall Camera::BoxInFrustum(Camera *this, const struct BBox *a2, float a3, bool a4)
{
  int result; // eax
  int v6; // ebx
  unsigned int v7; // edi
  int i; // ebp
  int v9; // eax
  int v10; // eax
  int v11; // eax

  result = Camera::BoxInFrustum(this, a2, a3, this);
  v6 = result;
  if ( !result )
  {
    if ( !a4 )
    {
      v7 = 0;
      for ( i = 0; ; i += 140 )
      {
        v9 = *((_DWORD *)this + 36);
        if ( !v9 || v7 >= (*((_DWORD *)this + 37) - v9) / 140 )
          break;
        v10 = *((_DWORD *)this + 36);
        if ( !v10 || v7 >= (*((_DWORD *)this + 37) - v10) / 140 )
          invalid_parameter_noinfo();
        v11 = *((_DWORD *)this + 36);
        if ( *(_BYTE *)(v11 + i + 96) )
        {
          if ( !v11 || v7 >= (*((_DWORD *)this + 37) - v11) / 140 )
            invalid_parameter_noinfo();
          if ( sub_10063350((float *)(*((_DWORD *)this + 36) + i + 100), (float *)a2) )
            return 1;
        }
        else
        {
          if ( !v11 || v7 >= (*((_DWORD *)this + 37) - v11) / 140 )
            invalid_parameter_noinfo();
          v6 = Camera::BoxInFrustum(this, a2, a3, (struct Camera::Frustum *)(i + *((_DWORD *)this + 36)));
          if ( v6 )
            return v6;
        }
        ++v7;
      }
    }
    return v6;
  }
  return result;
}
