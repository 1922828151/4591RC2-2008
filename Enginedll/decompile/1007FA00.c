/*
 * func-name: ?CheckBox@Editor@@QAE_NVBBox@@AAVVector@@1@Z
 * func-address: 0x1007fa00
 * callers: 0x10080780, 0x100822b0, 0x1008c3e0
 * callees: 0x1004c240, 0x1007f890, 0x1017a0b0, 0x101a2516
 */

char __stdcall Editor::CheckBox(
        char a1,
        int a2,
        int a3,
        int a4,
        char a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        float a11,
        float a12)
{
  float v12; // eax
  float *v13; // esi
  float v15; // [esp+0h] [ebp-34h]
  float v16; // [esp+Ch] [ebp-28h]
  float v17; // [esp+Ch] [ebp-28h]
  float v18[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+30h] [ebp-4h]

  v12 = a12;
  v13 = (float *)LODWORD(a11);
  a12 = *(float *)LODWORD(a12) - *(float *)LODWORD(a11);
  a11 = *(float *)(LODWORD(v12) + 4) - *(float *)(LODWORD(a11) + 4);
  v15 = *(float *)(LODWORD(v12) + 8) - v13[2];
  v16 = a11 * a11 + a12 * a12 + v15 * v15;
  v17 = sqrt(v16);
  v18[0] = a12;
  v18[1] = a11;
  v18[2] = v15;
  sub_1004C240(v18);
  if ( sub_1007F890((int)&a5, (int)&a8, v13, (int)v18, &a12, &a11) == -1 || a12 <= 0.0 || v17 <= (double)a12 )
  {
    v19 = -1;
    sub_1017A0B0(&a1);
    return 0;
  }
  else
  {
    v19 = -1;
    sub_1017A0B0(&a1);
    return 1;
  }
}
