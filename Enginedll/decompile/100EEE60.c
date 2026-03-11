/*
 * func-name: ?SetTransform@StaticModel@@UAEXABVMatrix@@@Z
 * func-address: 0x100eee60
 * callers: 0x100f1b00
 * callees: 0x1001cb70, 0x1009db20, 0x100eeba0
 */

void __thiscall StaticModel::SetTransform(StaticModel *this, const struct Matrix *a2)
{
  int v3; // esi
  float *v4; // eax
  int v5[16]; // [esp-40h] [ebp-8Ch] BYREF
  float v6[16]; // [esp+Ch] [ebp-40h] BYREF

  if ( *((_DWORD *)this + 77) )
  {
    qmemcpy((char *)this + 224, a2, 0x40u);
    qmemcpy(v5, (char *)this + 224, sizeof(v5));
    ModelFrame::UpdateMatrices(
      *((_DWORD **)this + 77),
      v5[0],
      v5[1],
      v5[2],
      v5[3],
      v5[4],
      v5[5],
      v5[6],
      v5[7],
      v5[8],
      v5[9],
      v5[10],
      v5[11],
      v5[12],
      v5[13],
      v5[14],
      v5[15]);
    StaticModel::UpdateWorldBBox(this);
    if ( *((_DWORD *)this + 36) )
    {
      v3 = **((_DWORD **)this + 36);
      v4 = sub_1001CB70((char *)this + 148, v6, *((_DWORD *)this + 77) + 164);
      (*(void (__thiscall **)(_DWORD, float *))(v3 + 32))(*((_DWORD *)this + 36), v4);
    }
  }
}
