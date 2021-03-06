
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------


package vcl


import (
	. "github.com/ying32/govcl/vcl/api"
    . "github.com/ying32/govcl/vcl/types"
    "unsafe"
)

type TTaskDialog struct {
    IComponent
    instance uintptr
    // 特殊情况下使用，主要应对Go的GC问题，与VCL没有太多关系。
    ptr unsafe.Pointer
}

// NewTaskDialog
// CN: 创建一个新的对象。
// EN: Create a new object.
func NewTaskDialog(owner IComponent) *TTaskDialog {
    t := new(TTaskDialog)
    t.instance = TaskDialog_Create(CheckPtr(owner))
    t.ptr = unsafe.Pointer(t.instance)
    return t
}

// TaskDialogFromInst
// CN: 新建一个对象来自已经存在的对象实例指针。
// EN: Create a new object from an existing object instance pointer.
func TaskDialogFromInst(inst uintptr) *TTaskDialog {
    t := new(TTaskDialog)
    t.instance = inst
    t.ptr = unsafe.Pointer(inst)
    return t
}

// TaskDialogFromObj
// CN: 新建一个对象来自已经存在的对象实例。
// EN: Create a new object from an existing object instance.
func TaskDialogFromObj(obj IObject) *TTaskDialog {
    t := new(TTaskDialog)
    t.instance = CheckPtr(obj)
    t.ptr = unsafe.Pointer(t.instance)
    return t
}

// TaskDialogFromUnsafePointer
// CN: 新建一个对象来自不安全的地址。注意：使用此函数可能造成一些不明情况，慎用。
// EN: Create a new object from an unsecure address. Note: Using this function may cause some unclear situations and be used with caution..
func TaskDialogFromUnsafePointer(ptr unsafe.Pointer) *TTaskDialog {
    t := new(TTaskDialog)
    t.instance = uintptr(ptr)
    t.ptr = ptr
    return t
}

// Free 
// CN: 释放对象。
// EN: Free object.
func (t *TTaskDialog) Free() {
    if t.instance != 0 {
        TaskDialog_Free(t.instance)
        t.instance = 0
        t.ptr = unsafe.Pointer(uintptr(0))
    }
}

// Instance 
// CN: 返回对象实例指针。
// EN: Return object instance pointer.
func (t *TTaskDialog) Instance() uintptr {
    return t.instance
}

// UnsafeAddr 
// CN: 获取一个不安全的地址。
// EN: Get an unsafe address.
func (t *TTaskDialog) UnsafeAddr() unsafe.Pointer {
    return t.ptr
}

// IsValid 
// CN: 检测地址是否为空。
// EN: Check if the address is empty.
func (t *TTaskDialog) IsValid() bool {
    return t.instance != 0
}

// TTaskDialogClass
// CN: 获取类信息指针。
// EN: Get class information pointer.
func TTaskDialogClass() TClass {
    return TaskDialog_StaticClassType()
}

// Execute
// CN: 执行。
// EN: .
func (t *TTaskDialog) Execute() bool {
    return TaskDialog_Execute(t.instance)
}

// FindComponent
// CN: 查找指定名称的组件。
// EN: Find the component with the specified name.
func (t *TTaskDialog) FindComponent(AName string) *TComponent {
    return ComponentFromInst(TaskDialog_FindComponent(t.instance, AName))
}

// GetNamePath
// CN: 获取类名路径。
// EN: Get the class name path.
func (t *TTaskDialog) GetNamePath() string {
    return TaskDialog_GetNamePath(t.instance)
}

// HasParent
// CN: 是否有父容器。
// EN: Is there a parent container.
func (t *TTaskDialog) HasParent() bool {
    return TaskDialog_HasParent(t.instance)
}

// Assign
// CN: 复制一个对象，如果对象实现了此方法的话。
// EN: Copy an object, if the object implements this method.
func (t *TTaskDialog) Assign(Source IObject) {
    TaskDialog_Assign(t.instance, CheckPtr(Source))
}

// DisposeOf
// CN: 丢弃当前对象。
// EN: Discard the current object.
func (t *TTaskDialog) DisposeOf() {
    TaskDialog_DisposeOf(t.instance)
}

// ClassType
// CN: 获取类的类型信息。
// EN: Get class type information.
func (t *TTaskDialog) ClassType() TClass {
    return TaskDialog_ClassType(t.instance)
}

// ClassName
// CN: 获取当前对象类名称。
// EN: Get the current object class name.
func (t *TTaskDialog) ClassName() string {
    return TaskDialog_ClassName(t.instance)
}

// InstanceSize
// CN: 获取当前对象实例大小。
// EN: Get the current object instance size.
func (t *TTaskDialog) InstanceSize() int32 {
    return TaskDialog_InstanceSize(t.instance)
}

// InheritsFrom
// CN: 判断当前类是否继承自指定类。
// EN: Determine whether the current class inherits from the specified class.
func (t *TTaskDialog) InheritsFrom(AClass TClass) bool {
    return TaskDialog_InheritsFrom(t.instance, AClass)
}

// Equals
// CN: 与一个对象进行比较。
// EN: Compare with an object.
func (t *TTaskDialog) Equals(Obj IObject) bool {
    return TaskDialog_Equals(t.instance, CheckPtr(Obj))
}

// GetHashCode
// CN: 获取类的哈希值。
// EN: Get the hash value of the class.
func (t *TTaskDialog) GetHashCode() int32 {
    return TaskDialog_GetHashCode(t.instance)
}

// ToString
// CN: 文本类信息。
// EN: Text information.
func (t *TTaskDialog) ToString() string {
    return TaskDialog_ToString(t.instance)
}

// Buttons
func (t *TTaskDialog) Buttons() *TTaskDialogButtons {
    return TaskDialogButtonsFromInst(TaskDialog_GetButtons(t.instance))
}

// SetButtons
func (t *TTaskDialog) SetButtons(value *TTaskDialogButtons) {
    TaskDialog_SetButtons(t.instance, CheckPtr(value))
}

// Caption
// CN: 获取控件标题。
// EN: Get the control title.
func (t *TTaskDialog) Caption() string {
    return TaskDialog_GetCaption(t.instance)
}

// SetCaption
// CN: 设置控件标题。
// EN: Set the control title.
func (t *TTaskDialog) SetCaption(value string) {
    TaskDialog_SetCaption(t.instance, value)
}

// CommonButtons
func (t *TTaskDialog) CommonButtons() TTaskDialogCommonButtons {
    return TaskDialog_GetCommonButtons(t.instance)
}

// SetCommonButtons
func (t *TTaskDialog) SetCommonButtons(value TTaskDialogCommonButtons) {
    TaskDialog_SetCommonButtons(t.instance, value)
}

// CustomFooterIcon
func (t *TTaskDialog) CustomFooterIcon() *TIcon {
    return IconFromInst(TaskDialog_GetCustomFooterIcon(t.instance))
}

// SetCustomFooterIcon
func (t *TTaskDialog) SetCustomFooterIcon(value *TIcon) {
    TaskDialog_SetCustomFooterIcon(t.instance, CheckPtr(value))
}

// CustomMainIcon
func (t *TTaskDialog) CustomMainIcon() *TIcon {
    return IconFromInst(TaskDialog_GetCustomMainIcon(t.instance))
}

// SetCustomMainIcon
func (t *TTaskDialog) SetCustomMainIcon(value *TIcon) {
    TaskDialog_SetCustomMainIcon(t.instance, CheckPtr(value))
}

// DefaultButton
func (t *TTaskDialog) DefaultButton() TTaskDialogCommonButton {
    return TaskDialog_GetDefaultButton(t.instance)
}

// SetDefaultButton
func (t *TTaskDialog) SetDefaultButton(value TTaskDialogCommonButton) {
    TaskDialog_SetDefaultButton(t.instance, value)
}

// ExpandButtonCaption
func (t *TTaskDialog) ExpandButtonCaption() string {
    return TaskDialog_GetExpandButtonCaption(t.instance)
}

// SetExpandButtonCaption
func (t *TTaskDialog) SetExpandButtonCaption(value string) {
    TaskDialog_SetExpandButtonCaption(t.instance, value)
}

// ExpandedText
func (t *TTaskDialog) ExpandedText() string {
    return TaskDialog_GetExpandedText(t.instance)
}

// SetExpandedText
func (t *TTaskDialog) SetExpandedText(value string) {
    TaskDialog_SetExpandedText(t.instance, value)
}

// Flags
func (t *TTaskDialog) Flags() TTaskDialogFlags {
    return TaskDialog_GetFlags(t.instance)
}

// SetFlags
func (t *TTaskDialog) SetFlags(value TTaskDialogFlags) {
    TaskDialog_SetFlags(t.instance, value)
}

// FooterIcon
func (t *TTaskDialog) FooterIcon() TTaskDialogIcon {
    return TaskDialog_GetFooterIcon(t.instance)
}

// SetFooterIcon
func (t *TTaskDialog) SetFooterIcon(value TTaskDialogIcon) {
    TaskDialog_SetFooterIcon(t.instance, value)
}

// FooterText
func (t *TTaskDialog) FooterText() string {
    return TaskDialog_GetFooterText(t.instance)
}

// SetFooterText
func (t *TTaskDialog) SetFooterText(value string) {
    TaskDialog_SetFooterText(t.instance, value)
}

// MainIcon
func (t *TTaskDialog) MainIcon() TTaskDialogIcon {
    return TaskDialog_GetMainIcon(t.instance)
}

// SetMainIcon
func (t *TTaskDialog) SetMainIcon(value TTaskDialogIcon) {
    TaskDialog_SetMainIcon(t.instance, value)
}

// ProgressBar
func (t *TTaskDialog) ProgressBar() *TTaskDialogProgressBar {
    return TaskDialogProgressBarFromInst(TaskDialog_GetProgressBar(t.instance))
}

// SetProgressBar
func (t *TTaskDialog) SetProgressBar(value *TTaskDialogProgressBar) {
    TaskDialog_SetProgressBar(t.instance, CheckPtr(value))
}

// RadioButtons
func (t *TTaskDialog) RadioButtons() *TTaskDialogButtons {
    return TaskDialogButtonsFromInst(TaskDialog_GetRadioButtons(t.instance))
}

// SetRadioButtons
func (t *TTaskDialog) SetRadioButtons(value *TTaskDialogButtons) {
    TaskDialog_SetRadioButtons(t.instance, CheckPtr(value))
}

// Text
// CN: 获取文本。
// EN: .
func (t *TTaskDialog) Text() string {
    return TaskDialog_GetText(t.instance)
}

// SetText
// CN: 设置文本。
// EN: .
func (t *TTaskDialog) SetText(value string) {
    TaskDialog_SetText(t.instance, value)
}

// Title
func (t *TTaskDialog) Title() string {
    return TaskDialog_GetTitle(t.instance)
}

// SetTitle
func (t *TTaskDialog) SetTitle(value string) {
    TaskDialog_SetTitle(t.instance, value)
}

// VerificationText
func (t *TTaskDialog) VerificationText() string {
    return TaskDialog_GetVerificationText(t.instance)
}

// SetVerificationText
func (t *TTaskDialog) SetVerificationText(value string) {
    TaskDialog_SetVerificationText(t.instance, value)
}

// SetOnButtonClicked
func (t *TTaskDialog) SetOnButtonClicked(fn TTaskDlgClickEvent) {
    TaskDialog_SetOnButtonClicked(t.instance, fn)
}

// SetOnDialogConstructed
func (t *TTaskDialog) SetOnDialogConstructed(fn TNotifyEvent) {
    TaskDialog_SetOnDialogConstructed(t.instance, fn)
}

// SetOnDialogCreated
func (t *TTaskDialog) SetOnDialogCreated(fn TNotifyEvent) {
    TaskDialog_SetOnDialogCreated(t.instance, fn)
}

// SetOnDialogDestroyed
func (t *TTaskDialog) SetOnDialogDestroyed(fn TNotifyEvent) {
    TaskDialog_SetOnDialogDestroyed(t.instance, fn)
}

// SetOnExpanded
func (t *TTaskDialog) SetOnExpanded(fn TNotifyEvent) {
    TaskDialog_SetOnExpanded(t.instance, fn)
}

// SetOnHyperlinkClicked
func (t *TTaskDialog) SetOnHyperlinkClicked(fn TNotifyEvent) {
    TaskDialog_SetOnHyperlinkClicked(t.instance, fn)
}

// SetOnNavigated
func (t *TTaskDialog) SetOnNavigated(fn TNotifyEvent) {
    TaskDialog_SetOnNavigated(t.instance, fn)
}

// SetOnRadioButtonClicked
func (t *TTaskDialog) SetOnRadioButtonClicked(fn TNotifyEvent) {
    TaskDialog_SetOnRadioButtonClicked(t.instance, fn)
}

// SetOnTimer
func (t *TTaskDialog) SetOnTimer(fn TTaskDlgTimerEvent) {
    TaskDialog_SetOnTimer(t.instance, fn)
}

// SetOnVerificationClicked
func (t *TTaskDialog) SetOnVerificationClicked(fn TNotifyEvent) {
    TaskDialog_SetOnVerificationClicked(t.instance, fn)
}

// Button
func (t *TTaskDialog) Button() *TTaskDialogButtonItem {
    return TaskDialogButtonItemFromInst(TaskDialog_GetButton(t.instance))
}

// SetButton
func (t *TTaskDialog) SetButton(value *TTaskDialogButtonItem) {
    TaskDialog_SetButton(t.instance, CheckPtr(value))
}

// Expanded
func (t *TTaskDialog) Expanded() bool {
    return TaskDialog_GetExpanded(t.instance)
}

// Handle
// CN: 获取控件句柄。
// EN: Get Control handle.
func (t *TTaskDialog) Handle() HWND {
    return TaskDialog_GetHandle(t.instance)
}

// ModalResult
// CN: 获取模态对话框显示结果。
// EN: .
func (t *TTaskDialog) ModalResult() TModalResult {
    return TaskDialog_GetModalResult(t.instance)
}

// SetModalResult
// CN: 设置模态对话框显示结果。
// EN: .
func (t *TTaskDialog) SetModalResult(value TModalResult) {
    TaskDialog_SetModalResult(t.instance, value)
}

// RadioButton
func (t *TTaskDialog) RadioButton() *TTaskDialogRadioButtonItem {
    return TaskDialogRadioButtonItemFromInst(TaskDialog_GetRadioButton(t.instance))
}

// URL
func (t *TTaskDialog) URL() string {
    return TaskDialog_GetURL(t.instance)
}

// ComponentCount
// CN: 获取组件总数。
// EN: Get the total number of components.
func (t *TTaskDialog) ComponentCount() int32 {
    return TaskDialog_GetComponentCount(t.instance)
}

// ComponentIndex
// CN: 获取组件索引。
// EN: Get component index.
func (t *TTaskDialog) ComponentIndex() int32 {
    return TaskDialog_GetComponentIndex(t.instance)
}

// SetComponentIndex
// CN: 设置组件索引。
// EN: Set component index.
func (t *TTaskDialog) SetComponentIndex(value int32) {
    TaskDialog_SetComponentIndex(t.instance, value)
}

// Owner
// CN: 获取组件所有者。
// EN: Get component owner.
func (t *TTaskDialog) Owner() *TComponent {
    return ComponentFromInst(TaskDialog_GetOwner(t.instance))
}

// Name
// CN: 获取组件名称。
// EN: Get the component name.
func (t *TTaskDialog) Name() string {
    return TaskDialog_GetName(t.instance)
}

// SetName
// CN: 设置组件名称。
// EN: Set the component name.
func (t *TTaskDialog) SetName(value string) {
    TaskDialog_SetName(t.instance, value)
}

// Tag
// CN: 获取对象标记。
// EN: Get the control tag.
func (t *TTaskDialog) Tag() int {
    return TaskDialog_GetTag(t.instance)
}

// SetTag
// CN: 设置对象标记。
// EN: Set the control tag.
func (t *TTaskDialog) SetTag(value int) {
    TaskDialog_SetTag(t.instance, value)
}

// Components
// CN: 获取指定索引组件。
// EN: Get the specified index component.
func (t *TTaskDialog) Components(AIndex int32) *TComponent {
    return ComponentFromInst(TaskDialog_GetComponents(t.instance, AIndex))
}

