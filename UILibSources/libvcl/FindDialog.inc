
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function FindDialog_Create(AOwner: TComponent): TFindDialog; stdcall;
begin
  Result :=  TFindDialog.Create(AOwner);
end;

procedure FindDialog_Free(AObj: TFindDialog); stdcall;
begin
  AObj.Free;
end;

procedure FindDialog_CloseDialog(AObj: TFindDialog); stdcall;
begin
  AObj.CloseDialog;
end;

function FindDialog_Execute(AObj: TFindDialog): LongBool; stdcall;
begin
  Result :=  AObj.Execute;
end;

function FindDialog_FindComponent(AObj: TFindDialog; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function FindDialog_GetNamePath(AObj: TFindDialog): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function FindDialog_HasParent(AObj: TFindDialog): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure FindDialog_Assign(AObj: TFindDialog; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure FindDialog_DisposeOf(AObj: TFindDialog); stdcall;
begin
  AObj.DisposeOf;
end;

function FindDialog_ClassType(AObj: TFindDialog): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function FindDialog_ClassName(AObj: TFindDialog): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function FindDialog_InstanceSize(AObj: TFindDialog): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function FindDialog_InheritsFrom(AObj: TFindDialog; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function FindDialog_Equals(AObj: TFindDialog; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function FindDialog_GetHashCode(AObj: TFindDialog): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function FindDialog_ToString(AObj: TFindDialog): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function FindDialog_GetLeft(AObj: TFindDialog): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure FindDialog_SetLeft(AObj: TFindDialog; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

procedure FindDialog_GetPosition(AObj: TFindDialog; var Result: TPoint); stdcall;
begin
  Result :=  AObj.Position;
end;

procedure FindDialog_SetPosition(AObj: TFindDialog; var AValue: TPoint); stdcall;
begin
  AObj.Position := AValue;
end;

function FindDialog_GetTop(AObj: TFindDialog): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure FindDialog_SetTop(AObj: TFindDialog; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function FindDialog_GetFindText(AObj: TFindDialog): PChar; stdcall;
begin
  Result :=  PChar(AObj.FindText);
end;

procedure FindDialog_SetFindText(AObj: TFindDialog; AValue: PChar); stdcall;
begin
  AObj.FindText := AValue;
end;

function FindDialog_GetOptions(AObj: TFindDialog): TFindOptions; stdcall;
begin
  Result :=  AObj.Options;
end;

procedure FindDialog_SetOptions(AObj: TFindDialog; AValue: TFindOptions); stdcall;
begin
  AObj.Options := AValue;
end;

procedure FindDialog_SetOnFind(AObj: TFindDialog; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnFind := nil;
    TEventClass.Remove(AObj, @TEventClass.OnFind);
    Exit;
  end;
  AObj.OnFind := TEventClass.OnFind;
  TEventClass.Add(AObj, @TEventClass.OnFind, AEventId);
end;

function FindDialog_GetHandle(AObj: TFindDialog): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

function FindDialog_GetCtl3D(AObj: TFindDialog): LongBool; stdcall;
begin
  Result :=  AObj.Ctl3D;
end;

procedure FindDialog_SetCtl3D(AObj: TFindDialog; AValue: LongBool); stdcall;
begin
  AObj.Ctl3D := AValue;
end;

procedure FindDialog_SetOnClose(AObj: TFindDialog; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClose := nil;
    TEventClass.Remove(AObj, @TEventClass.OnClose);
    Exit;
  end;
  AObj.OnClose := TEventClass.OnClose;
  TEventClass.Add(AObj, @TEventClass.OnClose, AEventId);
end;

procedure FindDialog_SetOnShow(AObj: TFindDialog; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnShow := nil;
    TEventClass.Remove(AObj, @TEventClass.OnShow);
    Exit;
  end;
  AObj.OnShow := TEventClass.OnShow;
  TEventClass.Add(AObj, @TEventClass.OnShow, AEventId);
end;

function FindDialog_GetComponentCount(AObj: TFindDialog): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function FindDialog_GetComponentIndex(AObj: TFindDialog): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure FindDialog_SetComponentIndex(AObj: TFindDialog; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function FindDialog_GetOwner(AObj: TFindDialog): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function FindDialog_GetName(AObj: TFindDialog): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure FindDialog_SetName(AObj: TFindDialog; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function FindDialog_GetTag(AObj: TFindDialog): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure FindDialog_SetTag(AObj: TFindDialog; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function FindDialog_GetComponents(AObj: TFindDialog; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function FindDialog_StaticClassType: TClass; stdcall;
begin
  Result := TFindDialog;
end;

exports
  FindDialog_Create,
  FindDialog_Free,
  FindDialog_CloseDialog,
  FindDialog_Execute,
  FindDialog_FindComponent,
  FindDialog_GetNamePath,
  FindDialog_HasParent,
  FindDialog_Assign,
  FindDialog_DisposeOf,
  FindDialog_ClassType,
  FindDialog_ClassName,
  FindDialog_InstanceSize,
  FindDialog_InheritsFrom,
  FindDialog_Equals,
  FindDialog_GetHashCode,
  FindDialog_ToString,
  FindDialog_GetLeft,
  FindDialog_SetLeft,
  FindDialog_GetPosition,
  FindDialog_SetPosition,
  FindDialog_GetTop,
  FindDialog_SetTop,
  FindDialog_GetFindText,
  FindDialog_SetFindText,
  FindDialog_GetOptions,
  FindDialog_SetOptions,
  FindDialog_SetOnFind,
  FindDialog_GetHandle,
  FindDialog_GetCtl3D,
  FindDialog_SetCtl3D,
  FindDialog_SetOnClose,
  FindDialog_SetOnShow,
  FindDialog_GetComponentCount,
  FindDialog_GetComponentIndex,
  FindDialog_SetComponentIndex,
  FindDialog_GetOwner,
  FindDialog_GetName,
  FindDialog_SetName,
  FindDialog_GetTag,
  FindDialog_SetTag,
  FindDialog_GetComponents,
  FindDialog_StaticClassType;

