// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UICollectionViewLayoutAttributes;
@class NSIndexPath;
@class NSCoder;


/// Base class for the Horizontal layout
SWIFT_CLASS("_TtC15JTAppleCalendar21JTAppleCalendarLayout")
@interface JTAppleCalendarLayout : UICollectionViewLayout

/// Tells the layout object to update the current layout.
- (void)prepareLayout;

/// Returns the width and height of the collection view’s contents. The width and height of the collection view’s contents.
- (CGSize)collectionViewContentSize;

/// Returns the layout attributes for all of the cells and views in the specified rectangle.
- (NSArray<UICollectionViewLayoutAttributes *> * _Nullable)layoutAttributesForElementsInRect:(CGRect)rect;

/// Returns the layout attributes for the specified supplementary view.
- (UICollectionViewLayoutAttributes * _Nullable)layoutAttributesForSupplementaryViewOfKind:(NSString * _Nonnull)elementKind atIndexPath:(NSIndexPath * _Nonnull)indexPath;

/// Returns the layout attributes for the item at the specified index path. A layout attributes object containing the information to apply to the item’s cell.
- (UICollectionViewLayoutAttributes * _Nullable)layoutAttributesForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;

/// Returns an object initialized from data in a given unarchiver. self, initialized using the data in decoder.
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;

/// Returns the content offset to use after an animation layout update or change.
///
/// \param proposedContentOffset The proposed point for the upper-left corner of the visible content
///
/// \returns  The content offset that you want to use instead
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset;
@end

@class NSDate;


/// An instance of JTAppleCalendarView (or simply, a calendar view) is a means for displaying and interacting with a gridstyle layout of date-cells
SWIFT_CLASS("_TtC15JTAppleCalendar19JTAppleCalendarView")
@interface JTAppleCalendarView : UIView

/// The amount of buffer space before the first row of date-cells
@property (nonatomic) CGFloat bufferTop;

/// The amount of buffer space after the last row of date-cells
@property (nonatomic) CGFloat bufferBottom;

/// Enables and disables animations when scrolling to and from date-cells
@property (nonatomic) BOOL animationsEnabled;

/// The scroll direction of the sections in JTAppleCalendar.
@property (nonatomic) UICollectionViewScrollDirection direction;

/// Enables/Disables multiple selection on JTAppleCalendar
@property (nonatomic) BOOL allowsMultipleSelection;

/// Number of rows to be displayed per month. Allowed values are 1, 2, 3 & 6. After changing this value, you should reload your calendarView to show your change
@property (nonatomic) NSInteger numberOfRowsPerMonth;

/// Returns all selected dates
@property (nonatomic, readonly, copy) NSArray<NSDate *> * _Nonnull selectedDates;

/// Cell inset padding for the x and y axis of every date-cell on the calendar view.
@property (nonatomic) CGPoint cellInset;

/// Enable or disable paging when the calendar view is scrolled
@property (nonatomic) BOOL pagingEnabled;

/// Enable or disable swipe scrolling of the calendar with this variable
@property (nonatomic) BOOL scrollEnabled;

/// This is only applicable when calendar view paging is not enabled. Use this variable to decelerate the scroll movement to make it more 'sticky' or more fluid scrolling
@property (nonatomic) CGFloat scrollResistance;

/// The frame rectangle which defines the view's location and size in its superview coordinate system.
@property (nonatomic) CGRect frame;

/// Returns an object initialized from data in a given unarchiver. self, initialized using the data in decoder.
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;

/// Prepares the receiver for service after it has been loaded from an Interface Builder archive, or nib file.
- (void)awakeFromNib;

/// Lays out subviews.
- (void)layoutSubviews;
@end

@class UIScrollView;

@interface JTAppleCalendarView (SWIFT_EXTENSION(JTAppleCalendar)) <UIScrollViewDelegate>

/// Tells the delegate when the user finishes scrolling the content.
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Null_unspecified)targetContentOffset;

/// Tells the delegate when a scrolling animation in the scroll view concludes.
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;

/// Tells the delegate that the scroll view has ended decelerating the scrolling movement.
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
@end


@interface JTAppleCalendarView (SWIFT_EXTENSION(JTAppleCalendar))
@end


@interface JTAppleCalendarView (SWIFT_EXTENSION(JTAppleCalendar))
@end

@class UICollectionView;
@class UICollectionReusableView;
@class UICollectionViewCell;

@interface JTAppleCalendarView (SWIFT_EXTENSION(JTAppleCalendar)) <UICollectionViewDataSource, UICollectionViewDelegate>

/// Asks your data source object to provide a supplementary view to display in the collection view.
- (UICollectionReusableView * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView viewForSupplementaryElementOfKind:(NSString * _Nonnull)kind atIndexPath:(NSIndexPath * _Nonnull)indexPath;

/// Asks your data source object for the cell that corresponds to the specified item in the collection view.
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;

/// Asks your data source object for the number of sections in the collection view. The number of sections in collectionView.
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;

/// Asks your data source object for the number of items in the specified section. The number of rows in section.
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;

/// Asks the delegate if the specified item should be selected. true if the item should be selected or false if it should not.
- (BOOL)collectionView:(UICollectionView * _Nonnull)collectionView shouldSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;

/// Tells the delegate that the item at the specified path was deselected. The collection view calls this method when the user successfully deselects an item in the collection view. It does not call this method when you programmatically deselect items.
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didDeselectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;

/// Asks the delegate if the specified item should be deselected. true if the item should be deselected or false if it should not.
- (BOOL)collectionView:(UICollectionView * _Nonnull)collectionView shouldDeselectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;

/// Tells the delegate that the item at the specified index path was selected. The collection view calls this method when the user successfully selects an item in the collection view. It does not call this method when you programmatically set the selection.
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface JTAppleCalendarView (SWIFT_EXTENSION(JTAppleCalendar))

/// Let's the calendar know which cell xib to use for the displaying of it's date-cells.
///
/// \param name The name of the xib of your cell design
- (void)registerCellViewXibWithFileName:(NSString * _Nonnull)name;

/// Let's the calendar know which cell class to use for the displaying of it's date-cells.
///
/// \param name The class name of your cell design
- (void)registerCellViewClassWithFileName:(NSString * _Nonnull)name;

/// Let's the calendar know which cell class to use for the displaying of it's date-cells.
///
/// \param name The type of your cell design
- (void)registerCellViewClassWithCellClass:(Class _Nonnull)cellClass;

/// Register header views with the calender. This needs to be done before the view can be displayed
///
/// \param fileNames A dictionary containing [headerViewNames:HeaderviewSizes]
- (void)registerHeaderViewXibsWithFileNames:(NSArray<NSString *> * _Nonnull)headerViewXibNames;

/// Reloads the data on the calendar view. Scroll delegates are not triggered with this function.
- (void)reloadDataWithAnchorDate:(NSDate * _Nullable)date withAnimation:(BOOL)animation completionHandler:(void (^ _Nullable)(void))completionHandler;

/// Reload the date of specified date-cells on the calendar-view
///
/// \param dates Date-cells with these specified dates will be reloaded
- (void)reloadDates:(NSArray<NSDate *> * _Nonnull)dates;

/// Select a date-cell if it is on screen
///
/// \param date The date-cell with this date will be selected
///
/// \param triggerDidSelectDelegate Triggers the delegate function only if the value is set to true. Sometimes it is necessary to setup some dates without triggereing the delegate e.g. For instance, when youre initally setting up data in your viewDidLoad
- (void)selectDates:(NSArray<NSDate *> * _Nonnull)dates triggerSelectionDelegate:(BOOL)triggerSelectionDelegate;

/// Scrolls the calendar view to the next section view. It will execute a completion handler at the end of scroll animation if provided.
///
/// <ul><li>Paramater animateScroll: Bool indicating if animation should be enabled</li></ul>
/// \param completionHandler A completion handler that will be executed at the end of the scroll animation
- (void)scrollToNextSegment:(BOOL)animateScroll completionHandler:(void (^ _Nullable)(void))completionHandler;

/// Scrolls the calendar view to the previous section view. It will execute a completion handler at the end of scroll animation if provided.
///
/// <ul><li>Paramater animateScroll: Bool indicating if animation should be enabled</li></ul>
/// \param completionHandler A completion handler that will be executed at the end of the scroll animation
- (void)scrollToPreviousSegment:(BOOL)animateScroll completionHandler:(void (^ _Nullable)(void))completionHandler;

/// Scrolls the calendar view to the start of a section view header. If the calendar has no headers registered, then this function does nothing
///
/// <ul><li>Paramater date: The calendar view will scroll to the header of a this provided date</li></ul>
- (void)scrollToHeaderForDate:(NSDate * _Nonnull)date triggerScrollToDateDelegate:(BOOL)triggerScrollToDateDelegate withAnimation:(BOOL)animation completionHandler:(void (^ _Nullable)(void))completionHandler;
@end



/// The header view class of the calendar
SWIFT_CLASS("_TtC15JTAppleCalendar29JTAppleCollectionReusableView")
@interface JTAppleCollectionReusableView : UICollectionReusableView

/// Returns an object initialized from data in a given unarchiver. self, initialized using the data in decoder.
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// The JTAppleDayCell class defines the attributes and behavior of the cells that appear in JTAppleCalendarView objects.
SWIFT_CLASS("_TtC15JTAppleCalendar14JTAppleDayCell")
@interface JTAppleDayCell : UICollectionViewCell

/// Returns an object initialized from data in a given unarchiver.
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// A day-cell view. The custom day-cells that you create should be a subclass of JTAppleDayCellView
SWIFT_CLASS("_TtC15JTAppleCalendar18JTAppleDayCellView")
@interface JTAppleDayCellView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// A header view. The custom headerview that you create should be a subclass of JTAppleHeaderView
SWIFT_CLASS("_TtC15JTAppleCalendar17JTAppleHeaderView")
@interface JTAppleHeaderView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSDate (SWIFT_EXTENSION(JTAppleCalendar))
@end


@interface NSDate (SWIFT_EXTENSION(JTAppleCalendar))
@end

#pragma clang diagnostic pop
