/*
 * func-name: ??0Effect_Light@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100da790
 * callers: 0x1000efd4
 * callees: 0x1001aa87
 */

Effect_Light *__thiscall Effect_Light::Effect_Light(Effect_Light *this, struct World *a2)
{
  World *v3; // ecx
  Editor *v4; // eax
  int v5; // eax
  _DWORD v7[7]; // [esp-18h] [ebp-E8h] BYREF
  char *v8; // [esp+4h] [ebp-CCh]
  _DWORD v9[7]; // [esp+8h] [ebp-C8h] BYREF
  _DWORD v10[7]; // [esp+24h] [ebp-ACh] BYREF
  int v11; // [esp+40h] [ebp-90h]
  int v12; // [esp+44h] [ebp-8Ch]
  int v13; // [esp+48h] [ebp-88h]
  int v14; // [esp+4Ch] [ebp-84h]
  Effect_Light *v15; // [esp+58h] [ebp-78h]
  _DWORD *v16; // [esp+5Ch] [ebp-74h]
  _DWORD *v17; // [esp+60h] [ebp-70h]
  _BYTE v18[96]; // [esp+64h] [ebp-6Ch] BYREF
  int v19; // [esp+CCh] [ebp-4h]

  v15 = this;
  Effect_Base::Effect_Base(this, a2);
  v3 = (World *)*((_DWORD *)this + 178);
  *((float *)this + 285) = 10.0;
  v19 = 0;
  *(_DWORD *)this = &Effect_Light::`vftable';
  *((_DWORD *)this + 284) = 0;
  if ( v3 && World::IsLoading(v3) || (v4 = (Editor *)Editor::Instance(v13, v14), Editor::GetEditorMode(v4)) )
  {
    v12 = 0;
    v11 = 1;
    std::string::string(v10, &unk_103100FC);
    v16 = v9;
    LOBYTE(v19) = 1;
    std::string::string(v9, &unk_10310108);
    v8 = (char *)this + 1140;
    v17 = v7;
    LOBYTE(v19) = 2;
    std::string::string(v7, "LightRange");
    LOBYTE(v19) = 0;
    v5 = EditorVar::EditorVar(
           v18,
           v7[0],
           v7[1],
           v7[2],
           v7[3],
           v7[4],
           v7[5],
           v7[6],
           v8,
           v9[0],
           v9[1],
           v9[2],
           v9[3],
           v9[4],
           v9[5],
           v9[6],
           v10[0],
           v10[1],
           v10[2],
           v10[3],
           v10[4],
           v10[5],
           v10[6],
           v11,
           v12);
    LOBYTE(v19) = 3;
    std::vector<EditorVar>::push_back((char *)this + 424, v5);
    LOBYTE(v19) = 0;
    EditorVar::~EditorVar((EditorVar *)v18);
  }
  return this;
}
