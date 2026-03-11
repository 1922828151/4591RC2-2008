/*
 * func-name: ?DrawModel@Editor@@IAEXPAVModel@@PAVCamera@@@Z
 * func-address: 0x10080700
 * callers: 0x10082b00, 0x10088cd0
 * callees: 0x10063830, 0x100805c0, 0x100ee930, 0x1017a0b0
 */

void __thiscall Editor::DrawModel(Editor *this, struct ModelFrame ***a2, struct Camera *a3)
{
  _BYTE v4[40]; // [esp+8h] [ebp-34h] BYREF
  int v5; // [esp+38h] [ebp-4h]

  StaticModel::GetWorldBBox(a2, v4);
  v5 = 0;
  if ( Camera::BoxInFrustum(a3, (const struct BBox *)v4, 0.0, 0) )
    Editor::DrawFrame(this, (struct Model *)a2, a2[77]);
  v5 = -1;
  sub_1017A0B0(v4);
}
