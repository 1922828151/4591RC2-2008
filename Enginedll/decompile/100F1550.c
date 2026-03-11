/*
 * func-name: ?DrawSimpleNonFFP@StaticModel@@QAEXPAVCamera@@PAVShader@@VMatrix@@@Z
 * func-address: 0x100f1550
 * callers: 0x10139150
 * callees: 0x100f1180
 */

struct Mesh *__thiscall StaticModel::DrawSimpleNonFFP(
        ModelFrame **this,
        struct Camera *a2,
        Shader *a3,
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
        int a19)
{
  int v20[16]; // [esp-40h] [ebp-48h] BYREF

  qmemcpy(v20, &a4, sizeof(v20));
  return StaticModel::DrawSimpleNonFFP(
           (StaticModel *)this,
           a2,
           this[77],
           a3,
           v20[0],
           v20[1],
           v20[2],
           v20[3],
           v20[4],
           v20[5],
           v20[6],
           v20[7],
           v20[8],
           v20[9],
           v20[10],
           v20[11],
           v20[12],
           v20[13],
           v20[14],
           v20[15]);
}
