/*
 * func-name: ?Clone@Actor@@UAEXPAV1@_N@Z
 * func-address: 0x1004f2e0
 * callers: 0x10054180, 0x100de040, 0x10116a10, 0x1015bc70
 * callees: 0x10012750, 0x1007ec70, 0x100f2ca0, 0x101377c0, 0x1017ad40, 0x101a2534
 */

void __thiscall Actor::Clone(Actor *this, struct Actor *a2, int a3)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v5; // eax
  int v6; // eax
  Model *v7; // eax
  Model *v8; // eax
  int *v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // [esp-2Ch] [ebp-70h] BYREF
  int v13; // [esp-14h] [ebp-58h]
  _BYTE v14[28]; // [esp+0h] [ebp-44h] BYREF
  _BYTE v15[28]; // [esp+1Ch] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v16; // [esp+38h] [ebp-Ch]
  void *v17; // [esp+3Ch] [ebp-8h]
  int v18; // [esp+40h] [ebp-4h]

  v18 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v17 = &loc_101A8C19;
  v16 = ExceptionList;
  if ( *((_BYTE *)this + 440) && *((_BYTE *)Editor::Instance() + 2056) )
  {
    std::string::string(v14, (char *)this + 444);
    v18 = 0;
    do
    {
      std::string::string(&v12, v14);
      v5 = sub_1017AD40(v15, v12);
      LOBYTE(v18) = 1;
      std::string::operator=(v14, v5);
      LOBYTE(v18) = 0;
      std::string::~string(v15);
    }
    while ( World::FindActor(v14) );
    std::string::operator=((char *)a2 + 444, v14);
    v18 = -1;
    std::string::~string(v14);
  }
  v6 = *((_DWORD *)this + 179);
  if ( v6 && *(_BYTE *)(v6 + 312) )
  {
    v7 = (Model *)operator new(0x1C8u);
    v18 = 2;
    if ( v7 )
      v8 = Model::Model(v7);
    else
      v8 = 0;
    *((_DWORD *)a2 + 179) = v8;
    v9 = (int *)*((_DWORD *)this + 179);
    v10 = *v9;
    v18 = -1;
    (*(void (__thiscall **)(int *, Model *, int, _DWORD))(v10 + 24))(v9, v8, a3, 0);
  }
  *((_DWORD *)a2 + 214) = *((_DWORD *)this + 214);
  *((_DWORD *)a2 + 215) = *((_DWORD *)this + 215);
  *((_DWORD *)a2 + 216) = *((_DWORD *)this + 216);
  qmemcpy((char *)a2 + 868, (char *)this + 868, 0x40u);
  qmemcpy((char *)a2 + 944, (char *)this + 944, 0x40u);
  *((_BYTE *)a2 + 440) = *((_BYTE *)this + 440);
  *((_DWORD *)a2 + 193) = *((_DWORD *)this + 193);
  *((_DWORD *)a2 + 194) = *((_DWORD *)this + 194);
  *((_DWORD *)a2 + 195) = *((_DWORD *)this + 195);
  *((_DWORD *)a2 + 196) = *((_DWORD *)this + 196);
  *((_DWORD *)a2 + 197) = *((_DWORD *)this + 197);
  *((_DWORD *)a2 + 198) = *((_DWORD *)this + 198);
  *((_DWORD *)a2 + 199) = *((_DWORD *)this + 199);
  *((_DWORD *)a2 + 200) = *((_DWORD *)this + 200);
  *((_DWORD *)a2 + 201) = *((_DWORD *)this + 201);
  *((_DWORD *)a2 + 182) = *((_DWORD *)this + 182);
  v11 = *((_DWORD *)this + 183);
  v13 = (int)this + 472;
  *((_DWORD *)a2 + 183) = v11;
  ScriptData::operator=((_BYTE *)a2 + 472, v13);
  *((_BYTE *)a2 + 724) = *((_BYTE *)this + 724);
  *((_BYTE *)a2 + 816) = *((_BYTE *)this + 816);
  *((_BYTE *)a2 + 421) = *((_BYTE *)this + 421);
  *((_BYTE *)a2 + 422) = *((_BYTE *)this + 422);
  *((float *)a2 + 68) = *((float *)this + 68);
  *((float *)a2 + 69) = *((float *)this + 69);
  *((_BYTE *)a2 + 696) = *((_BYTE *)this + 696);
  *((_DWORD *)a2 + 176) = *((_DWORD *)this + 176);
  *((_BYTE *)a2 + 1012) = *((_BYTE *)this + 1012);
  *((_BYTE *)a2 + 1010) = *((_BYTE *)this + 1010);
  *((_DWORD *)a2 + 196) = *((_DWORD *)this + 196);
  *((_DWORD *)a2 + 197) = *((_DWORD *)this + 197);
  *((_DWORD *)a2 + 198) = *((_DWORD *)this + 198);
  *((_DWORD *)a2 + 199) = *((_DWORD *)this + 199);
  *((_DWORD *)a2 + 200) = *((_DWORD *)this + 200);
  *((_DWORD *)a2 + 201) = *((_DWORD *)this + 201);
  *((_BYTE *)a2 + 308) = *((_BYTE *)this + 308);
  *((_DWORD *)a2 + 78) = *((_DWORD *)this + 78);
  *((_DWORD *)a2 + 79) = *((_DWORD *)this + 79);
  *((_DWORD *)a2 + 80) = *((_DWORD *)this + 80);
  *((_DWORD *)a2 + 81) = *((_DWORD *)this + 81);
  *((float *)a2 + 82) = *((float *)this + 82);
  if ( *((_BYTE *)this + 213) )
  {
    if ( Actor::callback_Clone )
      Actor::callback_Clone(*((_DWORD *)this + 54), *((_DWORD *)a2 + 54));
  }
}
