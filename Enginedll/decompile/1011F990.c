/*
 * func-name: sub_1011F990
 * func-address: 0x1011f990
 * callers: 0x1011b870, 0x1011d270
 * callees: 0x100edc30, 0x1011f920, 0x101a2500
 */

int __thiscall sub_1011F990(
        int *this,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        void *a11,
        int a12,
        int a13,
        int a14,
        void *a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33)
{
  unsigned int v34; // edi
  int v35; // ebx
  unsigned int v36; // eax
  struct Mesh::SkinWeights *v38; // eax
  unsigned int v39; // ebx
  unsigned int v40; // edi
  unsigned int v41; // ebp
  bool v42; // cc
  _DWORD v44[2]; // [esp+Ch] [ebp-14h] BYREF
  int v45; // [esp+1Ch] [ebp-4h]
  int v46; // [esp+24h] [ebp+4h]

  v34 = this[1];
  v35 = 0;
  v45 = 0;
  if ( v34 )
    v36 = (int)(this[2] - v34) / 124;
  else
    v36 = 0;
  if ( v36 >= a2 )
  {
    if ( v34 )
    {
      v39 = this[2];
      if ( a2 < (int)(v39 - v34) / 124 )
      {
        if ( v34 > v39 )
          invalid_parameter_noinfo();
        v40 = this[1];
        if ( v40 > this[2] )
          invalid_parameter_noinfo();
        v41 = v40 + 124 * a2;
        v42 = v41 <= this[2];
        v44[1] = v40;
        if ( !v42 || v41 < this[1] )
          invalid_parameter_noinfo();
        sub_1011F920(this, v44, (int)this, v41, (int)this, v39);
      }
    }
  }
  else
  {
    if ( v34 )
      v35 = (int)(this[2] - v34) / 124;
    v38 = (struct Mesh::SkinWeights *)this[2];
    v46 = (int)v38;
    if ( v34 > (unsigned int)v38 )
    {
      invalid_parameter_noinfo();
      v38 = (struct Mesh::SkinWeights *)v46;
    }
    sub_100EDC30((int)this, (int)this, v38, a2 - v35, (struct Mesh::SkinWeights *)&a3);
  }
  v45 = -1;
  if ( a15 )
    operator delete(a15);
  a15 = 0;
  a16 = 0;
  a17 = 0;
  if ( a11 )
    operator delete(a11);
  a11 = 0;
  a12 = 0;
  a13 = 0;
  return std::string::~string(&a3);
}
