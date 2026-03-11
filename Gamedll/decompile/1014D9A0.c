/*
 * func-name: sub_1014D9A0
 * func-address: 0x1014d9a0
 * callers: 0x1000e025
 * callees: 0x1000d080, 0x100107df, 0x10018214
 */

int __userpurge sub_1014D9A0@<eax>(
        int a1@<ecx>,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
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
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63)
{
  unsigned int v65; // edi
  int v66; // ebx
  unsigned int v67; // eax
  int v68; // eax
  unsigned int v69; // ebx
  unsigned int v70; // edi
  unsigned int v71; // ebp
  bool v72; // cc
  int v74; // [esp+0h] [ebp-28h]
  int v75; // [esp+4h] [ebp-24h]
  _DWORD v76[2]; // [esp+14h] [ebp-14h] BYREF
  int v77; // [esp+24h] [ebp-4h]

  v65 = *(_DWORD *)(a1 + 4);
  v66 = 0;
  v77 = 0;
  if ( v65 )
    v67 = (int)(*(_DWORD *)(a1 + 8) - v65) / 584;
  else
    v67 = 0;
  if ( v67 >= a2 )
  {
    if ( v65 )
    {
      v69 = *(_DWORD *)(a1 + 8);
      if ( a2 < (int)(v69 - v65) / 584 )
      {
        if ( v65 > v69 )
          _invalid_parameter_noinfo();
        v70 = *(_DWORD *)(a1 + 4);
        if ( v70 > *(_DWORD *)(a1 + 8) )
          _invalid_parameter_noinfo();
        v71 = v70 + 584 * a2;
        v72 = v71 <= *(_DWORD *)(a1 + 8);
        v76[1] = v70;
        if ( !v72 || v71 < *(_DWORD *)(a1 + 4) )
          _invalid_parameter_noinfo();
        sub_100107DF((int)v76, a1, v71, a1, v69);
      }
    }
  }
  else
  {
    if ( v65 )
      v66 = (int)(*(_DWORD *)(a1 + 8) - v65) / 584;
    v76[0] = *(_DWORD *)(a1 + 8);
    v68 = v76[0];
    if ( v65 > v76[0] )
    {
      _invalid_parameter_noinfo();
      v68 = v76[0];
    }
    sub_10018214(a1, v68, a2 - v66, (int)&a3);
  }
  v77 = -1;
  return sub_1000D080(v74, v75);
}
