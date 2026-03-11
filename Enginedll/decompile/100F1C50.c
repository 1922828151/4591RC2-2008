/*
 * func-name: ?Update@Model@@UAEXXZ
 * func-address: 0x100f1c50
 * callers: none
 * callees: 0x1009db20, 0x100ee340
 */

void __thiscall Model::Update(Model *this)
{
  int v2[16]; // [esp-34h] [ebp-4Ch] BYREF

  StaticModel::Update(this);
  if ( !*((_BYTE *)this + 404) && *((_DWORD *)this + 94) && *((_BYTE *)this + 136) )
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 94) + 52))(
      *((_DWORD *)this + 94),
      COERCE_UNSIGNED_INT64(GDeltaTime),
      HIDWORD(COERCE_UNSIGNED_INT64(GDeltaTime)),
      0);
  if ( *((_DWORD *)this + 77) )
  {
    qmemcpy(v2, (char *)this + 224, sizeof(v2));
    ModelFrame::UpdateMatrices(
      *((_DWORD **)this + 77),
      v2[0],
      v2[1],
      v2[2],
      v2[3],
      v2[4],
      v2[5],
      v2[6],
      v2[7],
      v2[8],
      v2[9],
      v2[10],
      v2[11],
      v2[12],
      v2[13],
      v2[14],
      v2[15]);
  }
  StaticModel::UpdateWorldBBox(this);
}
