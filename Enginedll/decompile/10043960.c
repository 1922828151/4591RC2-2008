/*
 * func-name: sub_10043960
 * func-address: 0x10043960
 * callers: 0x10047270
 * callees: 0x10012a30, 0x10048fc0, 0x100492d0, 0x1004a5e0, 0x1007ec70, 0x10082ff0, 0x10137860, 0x101a2500
 */

struct _EXCEPTION_REGISTRATION_RECORD *__thiscall sub_10043960(_DWORD *this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *result; // eax
  unsigned int v4; // edi
  int (__thiscall *v5)(int, const wchar_t *); // edx
  int v6; // eax
  int FirstNode; // eax
  int v8; // esi
  int v9; // eax
  int (__thiscall *v10)(int); // eax
  int v11; // eax
  int v12; // eax
  unsigned __int8 *v13; // eax
  World *v14; // ecx
  struct Editor *v15; // eax
  char v16; // [esp-10h] [ebp-B0h] BYREF
  int v17; // [esp-Ch] [ebp-ACh]
  int v18; // [esp-8h] [ebp-A8h]
  struct _GUID v19; // [esp-4h] [ebp-A4h]
  int Actor; // [esp+1Ch] [ebp-84h] BYREF
  UUID Uuid; // [esp+20h] [ebp-80h] BYREF
  _BYTE v22[28]; // [esp+30h] [ebp-70h] BYREF
  _BYTE v23[28]; // [esp+4Ch] [ebp-54h] BYREF
  _BYTE v24[28]; // [esp+68h] [ebp-38h] BYREF
  int v25; // [esp+84h] [ebp-1Ch] BYREF
  void *v26; // [esp+88h] [ebp-18h]
  int v27; // [esp+8Ch] [ebp-14h]
  int v28; // [esp+90h] [ebp-10h]
  struct _EXCEPTION_REGISTRATION_RECORD *v29; // [esp+94h] [ebp-Ch]
  void *v30; // [esp+98h] [ebp-8h]
  int v31; // [esp+9Ch] [ebp-4h]

  v31 = -1;
  result = NtCurrentTeb()->NtTib.ExceptionList;
  v30 = &loc_101A81D7;
  v29 = result;
  v4 = 0;
  if ( this[44] )
  {
    result = (struct _EXCEPTION_REGISTRATION_RECORD *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164))(
                                                        a2,
                                                        L"Name");
    if ( result )
    {
      ActorSelectedList::ActorSelectedList((ActorSelectedList *)v24, 0);
      v5 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164);
      v31 = 0;
      v6 = v5(a2, L"Name");
      XMLSystem::GetString(v23, v6, 0);
      LOBYTE(v31) = 1;
      std::string::operator=(v24, v23);
      Actor = (int)&v16;
      std::string::string(&v16, "Items");
      FirstNode = XMLSystem::FindFirstNode(
                    a2,
                    v16,
                    v17,
                    v18,
                    v19.Data1,
                    *(_DWORD *)&v19.Data2,
                    *(_DWORD *)v19.Data4,
                    *(_DWORD *)&v19.Data4[4]);
      if ( FirstNode )
      {
        v8 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 168))(FirstNode, L"Item");
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
        {
          do
          {
            v9 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v8 + 4))(v8, v4);
            if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v9 + 164))(v9, L"ActorGUID") )
            {
              v10 = *(int (__thiscall **)(int))(*(_DWORD *)v8 + 4);
              *(_DWORD *)&v19.Data4[4] = v4;
              v11 = v10(v8);
              v12 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v11 + 164))(v11, L"ActorGUID", 0);
              XMLSystem::GetString(v22, v12, *(_DWORD *)&v19.Data4[4]);
              *(_DWORD *)&v19.Data4[4] = &Uuid;
              LOBYTE(v31) = 2;
              v13 = (unsigned __int8 *)std::string::c_str(v22);
              UuidFromStringA(v13, *(UUID **)&v19.Data4[4]);
              v19.Data1 = Uuid.Data1;
              *(_DWORD *)&v19.Data2 = *(_DWORD *)&Uuid.Data2;
              *(_DWORD *)v19.Data4 = *(_DWORD *)Uuid.Data4;
              v14 = (World *)this[44];
              *(_DWORD *)&v19.Data4[4] = *(_DWORD *)&Uuid.Data4[4];
              Actor = (int)World::FindActor(v14, v19);
              if ( Actor )
                std::vector<Actor *>::push_back(&v25, &Actor);
              LOBYTE(v31) = 1;
              std::string::~string(v22);
            }
            ++v4;
          }
          while ( v4 < (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) );
        }
      }
      *(_DWORD *)&v19.Data4[4] = v24;
      v15 = Editor::Instance();
      sub_10048FC0((int)v15 + 2260, *(struct ActorSelectedList **)&v19.Data4[4]);
      LOBYTE(v31) = 0;
      std::string::~string(v23);
      v31 = -1;
      if ( v26 )
        operator delete(v26);
      v26 = 0;
      v27 = 0;
      v28 = 0;
      return (struct _EXCEPTION_REGISTRATION_RECORD *)std::string::~string(v24);
    }
  }
  return result;
}
