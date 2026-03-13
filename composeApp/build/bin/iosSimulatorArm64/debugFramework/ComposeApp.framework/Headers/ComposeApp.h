#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ComposeAppAppDispatchers, ComposeAppAppInitializer, ComposeAppAssetLoader, ComposeAppConstants, ComposeAppDatabaseDriverFactory, ComposeAppDatabaseInitializer, ComposeAppFood, ComposeAppFoodDatabaseCompanion, ComposeAppFoodDatabaseQueries, ComposeAppFoodEntity, ComposeAppFoodEntityMetadata, ComposeAppFoodJsonResponse, ComposeAppFoodJsonResponseCompanion, ComposeAppFoodMapper, ComposeAppFoodUnit, ComposeAppGetAllCategoriesUseCase, ComposeAppInitializeDataBaseUseCase, ComposeAppInitializeResult, ComposeAppInitializeResultAlreadyInitialized, ComposeAppInitializeResultSuccess, ComposeAppKermitLogger, ComposeAppKermitLoggerCompanion, ComposeAppKermit_coreBaseLogger, ComposeAppKermit_coreLogWriter, ComposeAppKermit_coreSeverity, ComposeAppKoin_coreBeanDefinition<T>, ComposeAppKoin_coreCallbacks<T>, ComposeAppKoin_coreCoreResolver, ComposeAppKoin_coreExtensionManager, ComposeAppKoin_coreInstanceFactory<T>, ComposeAppKoin_coreInstanceFactoryCompanion, ComposeAppKoin_coreInstanceRegistry, ComposeAppKoin_coreKind, ComposeAppKoin_coreKoin, ComposeAppKoin_coreKoinDefinition<R>, ComposeAppKoin_coreLevel, ComposeAppKoin_coreLockable, ComposeAppKoin_coreLogger, ComposeAppKoin_coreModule, ComposeAppKoin_coreOptionRegistry, ComposeAppKoin_coreParametersHolder, ComposeAppKoin_corePropertyRegistry, ComposeAppKoin_coreResolutionContext, ComposeAppKoin_coreScope, ComposeAppKoin_coreScopeDSL, ComposeAppKoin_coreScopeRegistry, ComposeAppKoin_coreScopeRegistryCompanion, ComposeAppKoin_coreSingleInstanceFactory<T>, ComposeAppKoin_coreTypeQualifier, ComposeAppKotlinAbstractCoroutineContextElement, ComposeAppKotlinAbstractCoroutineContextKey<B, E>, ComposeAppKotlinArray<T>, ComposeAppKotlinByteArray, ComposeAppKotlinByteIterator, ComposeAppKotlinEnum<E>, ComposeAppKotlinEnumCompanion, ComposeAppKotlinException, ComposeAppKotlinIllegalStateException, ComposeAppKotlinIntIterator, ComposeAppKotlinIntProgression, ComposeAppKotlinIntProgressionCompanion, ComposeAppKotlinIntRange, ComposeAppKotlinIntRangeCompanion, ComposeAppKotlinLazyThreadSafetyMode, ComposeAppKotlinMatchGroup, ComposeAppKotlinMatchResultDestructured, ComposeAppKotlinNothing, ComposeAppKotlinRegex, ComposeAppKotlinRegexCompanion, ComposeAppKotlinRegexOption, ComposeAppKotlinRuntimeException, ComposeAppKotlinThrowable, ComposeAppKotlinUnit, ComposeAppKotlinx_coroutines_coreCoroutineDispatcher, ComposeAppKotlinx_coroutines_coreCoroutineDispatcherKey, ComposeAppKotlinx_serialization_coreSerialKind, ComposeAppKotlinx_serialization_coreSerializersModule, ComposeAppLifecycle_viewmodelViewModel, ComposeAppMenuState, ComposeAppModelItemCard, ComposeAppModelRegex, ComposeAppModelSubItemCard, ComposeAppRuntimeAfterVersion, ComposeAppRuntimeBaseTransacterImpl, ComposeAppRuntimeExecutableQuery<__covariant RowType>, ComposeAppRuntimeQuery<__covariant RowType>, ComposeAppRuntimeTransacterImpl, ComposeAppRuntimeTransacterTransaction, ComposeAppSafeDoubleSerializer, ComposeAppSafeFloatSerializer, ComposeAppToastType, UIViewController;

@protocol ComposeAppAssetLoader, ComposeAppCategoryRepository, ComposeAppFoodDatabase, ComposeAppFoodRepository, ComposeAppKermit_coreLoggerConfig, ComposeAppKermit_coreMutableLoggerConfig, ComposeAppKoin_coreKoinComponent, ComposeAppKoin_coreKoinExtension, ComposeAppKoin_coreKoinScopeComponent, ComposeAppKoin_coreQualifier, ComposeAppKoin_coreResolutionExtension, ComposeAppKoin_coreScopeCallback, ComposeAppKotlinAnnotation, ComposeAppKotlinAutoCloseable, ComposeAppKotlinClosedRange, ComposeAppKotlinCollection, ComposeAppKotlinComparable, ComposeAppKotlinContinuation, ComposeAppKotlinContinuationInterceptor, ComposeAppKotlinCoroutineContext, ComposeAppKotlinCoroutineContextElement, ComposeAppKotlinCoroutineContextKey, ComposeAppKotlinIterable, ComposeAppKotlinIterator, ComposeAppKotlinKAnnotatedElement, ComposeAppKotlinKClass, ComposeAppKotlinKClassifier, ComposeAppKotlinKDeclarationContainer, ComposeAppKotlinLazy, ComposeAppKotlinMatchGroupCollection, ComposeAppKotlinMatchResult, ComposeAppKotlinOpenEndRange, ComposeAppKotlinSequence, ComposeAppKotlinx_coroutines_coreCoroutineScope, ComposeAppKotlinx_coroutines_coreFlow, ComposeAppKotlinx_coroutines_coreFlowCollector, ComposeAppKotlinx_coroutines_coreRunnable, ComposeAppKotlinx_coroutines_coreSharedFlow, ComposeAppKotlinx_coroutines_coreStateFlow, ComposeAppKotlinx_serialization_coreCompositeDecoder, ComposeAppKotlinx_serialization_coreCompositeEncoder, ComposeAppKotlinx_serialization_coreDecoder, ComposeAppKotlinx_serialization_coreDeserializationStrategy, ComposeAppKotlinx_serialization_coreEncoder, ComposeAppKotlinx_serialization_coreKSerializer, ComposeAppKotlinx_serialization_coreSerialDescriptor, ComposeAppKotlinx_serialization_coreSerializationStrategy, ComposeAppKotlinx_serialization_coreSerializersModuleCollector, ComposeAppPlatform, ComposeAppRuntimeCloseable, ComposeAppRuntimeQueryListener, ComposeAppRuntimeQueryResult, ComposeAppRuntimeSqlCursor, ComposeAppRuntimeSqlDriver, ComposeAppRuntimeSqlPreparedStatement, ComposeAppRuntimeSqlSchema, ComposeAppRuntimeTransacter, ComposeAppRuntimeTransacterBase, ComposeAppRuntimeTransactionCallbacks, ComposeAppRuntimeTransactionWithReturn, ComposeAppRuntimeTransactionWithoutReturn;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface ComposeAppBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface ComposeAppBase (ComposeAppBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface ComposeAppMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ComposeAppMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorComposeAppKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface ComposeAppNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface ComposeAppByte : ComposeAppNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface ComposeAppUByte : ComposeAppNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface ComposeAppShort : ComposeAppNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface ComposeAppUShort : ComposeAppNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface ComposeAppInt : ComposeAppNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface ComposeAppUInt : ComposeAppNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface ComposeAppLong : ComposeAppNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface ComposeAppULong : ComposeAppNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface ComposeAppFloat : ComposeAppNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface ComposeAppDouble : ComposeAppNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface ComposeAppBoolean : ComposeAppNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppInitializer")))
@interface ComposeAppAppInitializer : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)appInitializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppAppInitializer *shared __attribute__((swift_name("shared")));
- (void)doInitInitializeDBUseCase:(ComposeAppInitializeDataBaseUseCase *)initializeDBUseCase __attribute__((swift_name("doInit(initializeDBUseCase:)")));
@property ComposeAppInitializeDataBaseUseCase *initializeDatabaseUseCase __attribute__((swift_name("initializeDatabaseUseCase")));
@end

__attribute__((swift_name("AssetLoader")))
@protocol ComposeAppAssetLoader
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadJsonFilePath:(NSString *)path completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("loadJsonFile(path:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSAssetLoader")))
@interface ComposeAppIOSAssetLoader : ComposeAppBase <ComposeAppAssetLoader>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadJsonFilePath:(NSString *)path completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("loadJsonFile(path:completionHandler:)")));
@end

__attribute__((swift_name("Platform")))
@protocol ComposeAppPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface ComposeAppIOSPlatform : ComposeAppBase <ComposeAppPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * Objeto que contiene los metadatos de cada campo de Food,
 * incluyendo su unidad de medida y etiqueta para mostrar.
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodEntityMetadata")))
@interface ComposeAppFoodEntityMetadata : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Objeto que contiene los metadatos de cada campo de Food,
 * incluyendo su unidad de medida y etiqueta para mostrar.
 *
 * @author pelkidev
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)foodEntityMetadata __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppFoodEntityMetadata *shared __attribute__((swift_name("shared")));

/**
 * Obtiene la etiqueta de visualización para un campo específico.
 */
- (NSString *)getLabelFieldName:(NSString *)fieldName __attribute__((swift_name("getLabel(fieldName:)")));

/**
 * Obtiene la unidad de medida para un campo específico.
 */
- (ComposeAppFoodUnit *)getUnitFieldName:(NSString *)fieldName __attribute__((swift_name("getUnit(fieldName:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol ComposeAppKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface ComposeAppKotlinEnum<E> : ComposeAppBase <ComposeAppKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * Enum que define todas las unidades de medida utilizadas en Food.
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodUnit")))
@interface ComposeAppFoodUnit : ComposeAppKotlinEnum<ComposeAppFoodUnit *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enum que define todas las unidades de medida utilizadas en Food.
 *
 * @author pelkidev
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppFoodUnit *grams __attribute__((swift_name("grams")));
@property (class, readonly) ComposeAppFoodUnit *kilocalories __attribute__((swift_name("kilocalories")));
@property (class, readonly) ComposeAppFoodUnit *milligrams __attribute__((swift_name("milligrams")));
@property (class, readonly) ComposeAppFoodUnit *microgramsRe __attribute__((swift_name("microgramsRe")));
@property (class, readonly) ComposeAppFoodUnit *micrograms __attribute__((swift_name("micrograms")));
@property (class, readonly) ComposeAppFoodUnit *unitless __attribute__((swift_name("unitless")));
+ (ComposeAppKotlinArray<ComposeAppFoodUnit *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppFoodUnit *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *symbol __attribute__((swift_name("symbol")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetLoader_")))
@interface ComposeAppAssetLoader : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadJsonFileFileName:(NSString *)fileName completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("loadJsonFile(fileName:completionHandler:)")));
@end


/**
 * Inicializador de la base de datos SQLDelight.
 * Se encarga de poblar la base de datos con los datos iniciales del Sistema Mexicano
 * de Alimentos y Equivalentes (SMAE) la primera vez que se ejecuta la aplicación.
 *
 * @param assetLoader Cargador de assets multiplataforma
 * @param repository Repositorio de alimentos
 * @param jsonFileName Nombre del archivo JSON en assets (por defecto: "alimentos_smae.json")
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseInitializer")))
@interface ComposeAppDatabaseInitializer : ComposeAppBase
- (instancetype)initWithAssetLoader:(ComposeAppAssetLoader *)assetLoader repository:(id<ComposeAppFoodRepository>)repository __attribute__((swift_name("init(assetLoader:repository:)"))) __attribute__((objc_designated_initializer));

/**
 * Inicializa la base de datos si está vacía.
 * @return true si se insertaron datos, false si ya existían
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeIfNeededWithCompletionHandler:(void (^)(ComposeAppBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("initializeIfNeeded(completionHandler:)")));
@end

__attribute__((swift_name("RuntimeTransacterBase")))
@protocol ComposeAppRuntimeTransacterBase
@required
@end


/**
 * A transaction-aware [SqlDriver] wrapper which can begin a [Transaction] on the current connection.
 */
__attribute__((swift_name("RuntimeTransacter")))
@protocol ComposeAppRuntimeTransacter <ComposeAppRuntimeTransacterBase>
@required

/**
 * Starts a [Transaction] and runs [body] in that transaction.
 *
 * @throws IllegalStateException if [noEnclosing] is true and there is already an active
 *   [Transaction] on this thread.
 */
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<ComposeAppRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));

/**
 * Starts a [Transaction] and runs [bodyWithReturn] in that transaction.
 *
 * @throws IllegalStateException if [noEnclosing] is true and there is already an active
 *   [Transaction] on this thread.
 */
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<ComposeAppRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("FoodDatabase")))
@protocol ComposeAppFoodDatabase <ComposeAppRuntimeTransacter>
@required
@property (readonly) ComposeAppFoodDatabaseQueries *foodDatabaseQueries __attribute__((swift_name("foodDatabaseQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodDatabaseCompanion")))
@interface ComposeAppFoodDatabaseCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppFoodDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppFoodDatabase>)invokeDriver:(id<ComposeAppRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<ComposeAppRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end


/**
 * Factory para crear instancias de FoodDatabase.
 *
 * @param driverFactory Factory para crear el driver de la base de datos
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodDatabaseFactory")))
@interface ComposeAppFoodDatabaseFactory : ComposeAppBase
- (instancetype)initWithDriverFactory:(ComposeAppDatabaseDriverFactory *)driverFactory __attribute__((swift_name("init(driverFactory:)"))) __attribute__((objc_designated_initializer));
- (id<ComposeAppFoodDatabase>)createDatabase __attribute__((swift_name("createDatabase()")));
@end

__attribute__((swift_name("RuntimeBaseTransacterImpl")))
@interface ComposeAppRuntimeBaseTransacterImpl : ComposeAppBase
- (instancetype)initWithDriver:(id<ComposeAppRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * For internal use, creates a string in the format (?, ?, ?) where there are [count] question marks.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)createArgumentsCount:(int32_t)count __attribute__((swift_name("createArguments(count:)")));

/**
 * For internal use, notifies the listeners provided by [listenerProvider] that their underlying result set has
 * changed.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyQueriesIdentifier:(int32_t)identifier tableProvider:(void (^)(ComposeAppKotlinUnit *(^)(NSString *)))tableProvider __attribute__((swift_name("notifyQueries(identifier:tableProvider:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)postTransactionCleanupTransaction:(ComposeAppRuntimeTransacterTransaction *)transaction enclosing:(ComposeAppRuntimeTransacterTransaction * _Nullable)enclosing thrownException:(ComposeAppKotlinThrowable * _Nullable)thrownException returnValue:(id _Nullable)returnValue __attribute__((swift_name("postTransactionCleanup(transaction:enclosing:thrownException:returnValue:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<ComposeAppRuntimeSqlDriver> driver __attribute__((swift_name("driver")));
@end


/**
 * A transaction-aware [SqlDriver] wrapper which can begin a [Transaction] on the current connection.
 */
__attribute__((swift_name("RuntimeTransacterImpl")))
@interface ComposeAppRuntimeTransacterImpl : ComposeAppRuntimeBaseTransacterImpl <ComposeAppRuntimeTransacter>
- (instancetype)initWithDriver:(id<ComposeAppRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<ComposeAppRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<ComposeAppRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodDatabaseQueries")))
@interface ComposeAppFoodDatabaseQueries : ComposeAppRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<ComposeAppRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppRuntimeQuery<NSString *> *)getAllCategories __attribute__((swift_name("getAllCategories()")));
- (ComposeAppRuntimeQuery<ComposeAppLong *> *)getFoodCountByCategoryCategory:(NSString *)category __attribute__((swift_name("getFoodCountByCategory(category:)")));

/**
 * @return The number of rows updated.
 */
- (id<ComposeAppRuntimeQueryResult>)insertFoodCategory:(NSString *)category idCategory:(int64_t)idCategory food:(NSString *)food suggestedQuantity:(double)suggestedQuantity unit:(NSString *)unit netWeightG:(NSString *)netWeightG roundedGrossWeightG:(int64_t)roundedGrossWeightG energyKcal:(int64_t)energyKcal proteinG:(ComposeAppDouble * _Nullable)proteinG lipidsG:(ComposeAppDouble * _Nullable)lipidsG carbohydratesG:(ComposeAppDouble * _Nullable)carbohydratesG fiverG:(ComposeAppDouble * _Nullable)fiverG vitaminAUgRe:(ComposeAppDouble * _Nullable)vitaminAUgRe ascorbicAcidMg:(ComposeAppDouble * _Nullable)ascorbicAcidMg folicAcidUg:(ComposeAppDouble * _Nullable)folicAcidUg ironNoHemMg:(ComposeAppDouble * _Nullable)ironNoHemMg potassiumMg:(ComposeAppDouble * _Nullable)potassiumMg hypoglycemicIndex:(ComposeAppDouble * _Nullable)hypoglycemicIndex hypoglycemicLoad:(ComposeAppDouble * _Nullable)hypoglycemicLoad sugarPerEquivalentG:(ComposeAppDouble * _Nullable)sugarPerEquivalentG calciumMg:(ComposeAppDouble * _Nullable)calciumMg ironMg:(ComposeAppDouble * _Nullable)ironMg sodiumMg:(ComposeAppDouble * _Nullable)sodiumMg cholesterolMg:(ComposeAppDouble * _Nullable)cholesterolMg seleniumMg:(ComposeAppDouble * _Nullable)seleniumMg phosphorusMg:(ComposeAppDouble * _Nullable)phosphorusMg agSaturatedG:(ComposeAppDouble * _Nullable)agSaturatedG agMonounsaturatedG:(ComposeAppDouble * _Nullable)agMonounsaturatedG agPolyunsaturatedG:(ComposeAppDouble * _Nullable)agPolyunsaturatedG __attribute__((swift_name("insertFood(category:idCategory:food:suggestedQuantity:unit:netWeightG:roundedGrossWeightG:energyKcal:proteinG:lipidsG:carbohydratesG:fiverG:vitaminAUgRe:ascorbicAcidMg:folicAcidUg:ironNoHemMg:potassiumMg:hypoglycemicIndex:hypoglycemicLoad:sugarPerEquivalentG:calciumMg:ironMg:sodiumMg:cholesterolMg:seleniumMg:phosphorusMg:agSaturatedG:agMonounsaturatedG:agPolyunsaturatedG:)")));
- (ComposeAppRuntimeQuery<ComposeAppFoodEntity *> *)searchFoodsSearchQuery:(NSString *)searchQuery __attribute__((swift_name("searchFoods(searchQuery:)")));
- (ComposeAppRuntimeQuery<id> *)searchFoodsSearchQuery:(NSString *)searchQuery mapper:(id (^)(ComposeAppLong *id, NSString *category, ComposeAppLong *idCategory, NSString *food, ComposeAppDouble *suggestedQuantity, NSString *unit, NSString *netWeightG, ComposeAppLong *roundedGrossWeightG, ComposeAppLong *energyKcal, ComposeAppDouble * _Nullable proteinG, ComposeAppDouble * _Nullable lipidsG, ComposeAppDouble * _Nullable carbohydratesG, ComposeAppDouble * _Nullable fiverG, ComposeAppDouble * _Nullable vitaminAUgRe, ComposeAppDouble * _Nullable ascorbicAcidMg, ComposeAppDouble * _Nullable folicAcidUg, ComposeAppDouble * _Nullable ironNoHemMg, ComposeAppDouble * _Nullable potassiumMg, ComposeAppDouble * _Nullable hypoglycemicIndex, ComposeAppDouble * _Nullable hypoglycemicLoad, ComposeAppDouble * _Nullable sugarPerEquivalentG, ComposeAppDouble * _Nullable calciumMg, ComposeAppDouble * _Nullable ironMg, ComposeAppDouble * _Nullable sodiumMg, ComposeAppDouble * _Nullable cholesterolMg, ComposeAppDouble * _Nullable seleniumMg, ComposeAppDouble * _Nullable phosphorusMg, ComposeAppDouble * _Nullable agSaturatedG, ComposeAppDouble * _Nullable agMonounsaturatedG, ComposeAppDouble * _Nullable agPolyunsaturatedG))mapper __attribute__((swift_name("searchFoods(searchQuery:mapper:)")));
- (ComposeAppRuntimeQuery<ComposeAppFoodEntity *> *)selectAll __attribute__((swift_name("selectAll()")));
- (ComposeAppRuntimeQuery<id> *)selectAllMapper:(id (^)(ComposeAppLong *id, NSString *category, ComposeAppLong *idCategory, NSString *food, ComposeAppDouble *suggestedQuantity, NSString *unit, NSString *netWeightG, ComposeAppLong *roundedGrossWeightG, ComposeAppLong *energyKcal, ComposeAppDouble * _Nullable proteinG, ComposeAppDouble * _Nullable lipidsG, ComposeAppDouble * _Nullable carbohydratesG, ComposeAppDouble * _Nullable fiverG, ComposeAppDouble * _Nullable vitaminAUgRe, ComposeAppDouble * _Nullable ascorbicAcidMg, ComposeAppDouble * _Nullable folicAcidUg, ComposeAppDouble * _Nullable ironNoHemMg, ComposeAppDouble * _Nullable potassiumMg, ComposeAppDouble * _Nullable hypoglycemicIndex, ComposeAppDouble * _Nullable hypoglycemicLoad, ComposeAppDouble * _Nullable sugarPerEquivalentG, ComposeAppDouble * _Nullable calciumMg, ComposeAppDouble * _Nullable ironMg, ComposeAppDouble * _Nullable sodiumMg, ComposeAppDouble * _Nullable cholesterolMg, ComposeAppDouble * _Nullable seleniumMg, ComposeAppDouble * _Nullable phosphorusMg, ComposeAppDouble * _Nullable agSaturatedG, ComposeAppDouble * _Nullable agMonounsaturatedG, ComposeAppDouble * _Nullable agPolyunsaturatedG))mapper __attribute__((swift_name("selectAll(mapper:)")));
- (ComposeAppRuntimeQuery<ComposeAppFoodEntity *> *)selectAllByCategoryCategory:(NSString *)category __attribute__((swift_name("selectAllByCategory(category:)")));
- (ComposeAppRuntimeQuery<id> *)selectAllByCategoryCategory:(NSString *)category mapper:(id (^)(ComposeAppLong *id, NSString *category, ComposeAppLong *idCategory, NSString *food, ComposeAppDouble *suggestedQuantity, NSString *unit, NSString *netWeightG, ComposeAppLong *roundedGrossWeightG, ComposeAppLong *energyKcal, ComposeAppDouble * _Nullable proteinG, ComposeAppDouble * _Nullable lipidsG, ComposeAppDouble * _Nullable carbohydratesG, ComposeAppDouble * _Nullable fiverG, ComposeAppDouble * _Nullable vitaminAUgRe, ComposeAppDouble * _Nullable ascorbicAcidMg, ComposeAppDouble * _Nullable folicAcidUg, ComposeAppDouble * _Nullable ironNoHemMg, ComposeAppDouble * _Nullable potassiumMg, ComposeAppDouble * _Nullable hypoglycemicIndex, ComposeAppDouble * _Nullable hypoglycemicLoad, ComposeAppDouble * _Nullable sugarPerEquivalentG, ComposeAppDouble * _Nullable calciumMg, ComposeAppDouble * _Nullable ironMg, ComposeAppDouble * _Nullable sodiumMg, ComposeAppDouble * _Nullable cholesterolMg, ComposeAppDouble * _Nullable seleniumMg, ComposeAppDouble * _Nullable phosphorusMg, ComposeAppDouble * _Nullable agSaturatedG, ComposeAppDouble * _Nullable agMonounsaturatedG, ComposeAppDouble * _Nullable agPolyunsaturatedG))mapper __attribute__((swift_name("selectAllByCategory(category:mapper:)")));
- (ComposeAppRuntimeQuery<ComposeAppFoodEntity *> *)selectByIdId:(int64_t)id __attribute__((swift_name("selectById(id:)")));
- (ComposeAppRuntimeQuery<id> *)selectByIdId:(int64_t)id mapper:(id (^)(ComposeAppLong *id, NSString *category, ComposeAppLong *idCategory, NSString *food, ComposeAppDouble *suggestedQuantity, NSString *unit, NSString *netWeightG, ComposeAppLong *roundedGrossWeightG, ComposeAppLong *energyKcal, ComposeAppDouble * _Nullable proteinG, ComposeAppDouble * _Nullable lipidsG, ComposeAppDouble * _Nullable carbohydratesG, ComposeAppDouble * _Nullable fiverG, ComposeAppDouble * _Nullable vitaminAUgRe, ComposeAppDouble * _Nullable ascorbicAcidMg, ComposeAppDouble * _Nullable folicAcidUg, ComposeAppDouble * _Nullable ironNoHemMg, ComposeAppDouble * _Nullable potassiumMg, ComposeAppDouble * _Nullable hypoglycemicIndex, ComposeAppDouble * _Nullable hypoglycemicLoad, ComposeAppDouble * _Nullable sugarPerEquivalentG, ComposeAppDouble * _Nullable calciumMg, ComposeAppDouble * _Nullable ironMg, ComposeAppDouble * _Nullable sodiumMg, ComposeAppDouble * _Nullable cholesterolMg, ComposeAppDouble * _Nullable seleniumMg, ComposeAppDouble * _Nullable phosphorusMg, ComposeAppDouble * _Nullable agSaturatedG, ComposeAppDouble * _Nullable agMonounsaturatedG, ComposeAppDouble * _Nullable agPolyunsaturatedG))mapper __attribute__((swift_name("selectById(id:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodEntity")))
@interface ComposeAppFoodEntity : ComposeAppBase
- (instancetype)initWithId:(int64_t)id category:(NSString *)category idCategory:(int64_t)idCategory food:(NSString *)food suggestedQuantity:(double)suggestedQuantity unit:(NSString *)unit netWeightG:(NSString *)netWeightG roundedGrossWeightG:(int64_t)roundedGrossWeightG energyKcal:(int64_t)energyKcal proteinG:(ComposeAppDouble * _Nullable)proteinG lipidsG:(ComposeAppDouble * _Nullable)lipidsG carbohydratesG:(ComposeAppDouble * _Nullable)carbohydratesG fiverG:(ComposeAppDouble * _Nullable)fiverG vitaminAUgRe:(ComposeAppDouble * _Nullable)vitaminAUgRe ascorbicAcidMg:(ComposeAppDouble * _Nullable)ascorbicAcidMg folicAcidUg:(ComposeAppDouble * _Nullable)folicAcidUg ironNoHemMg:(ComposeAppDouble * _Nullable)ironNoHemMg potassiumMg:(ComposeAppDouble * _Nullable)potassiumMg hypoglycemicIndex:(ComposeAppDouble * _Nullable)hypoglycemicIndex hypoglycemicLoad:(ComposeAppDouble * _Nullable)hypoglycemicLoad sugarPerEquivalentG:(ComposeAppDouble * _Nullable)sugarPerEquivalentG calciumMg:(ComposeAppDouble * _Nullable)calciumMg ironMg:(ComposeAppDouble * _Nullable)ironMg sodiumMg:(ComposeAppDouble * _Nullable)sodiumMg cholesterolMg:(ComposeAppDouble * _Nullable)cholesterolMg seleniumMg:(ComposeAppDouble * _Nullable)seleniumMg phosphorusMg:(ComposeAppDouble * _Nullable)phosphorusMg agSaturatedG:(ComposeAppDouble * _Nullable)agSaturatedG agMonounsaturatedG:(ComposeAppDouble * _Nullable)agMonounsaturatedG agPolyunsaturatedG:(ComposeAppDouble * _Nullable)agPolyunsaturatedG __attribute__((swift_name("init(id:category:idCategory:food:suggestedQuantity:unit:netWeightG:roundedGrossWeightG:energyKcal:proteinG:lipidsG:carbohydratesG:fiverG:vitaminAUgRe:ascorbicAcidMg:folicAcidUg:ironNoHemMg:potassiumMg:hypoglycemicIndex:hypoglycemicLoad:sugarPerEquivalentG:calciumMg:ironMg:sodiumMg:cholesterolMg:seleniumMg:phosphorusMg:agSaturatedG:agMonounsaturatedG:agPolyunsaturatedG:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppFoodEntity *)doCopyId:(int64_t)id category:(NSString *)category idCategory:(int64_t)idCategory food:(NSString *)food suggestedQuantity:(double)suggestedQuantity unit:(NSString *)unit netWeightG:(NSString *)netWeightG roundedGrossWeightG:(int64_t)roundedGrossWeightG energyKcal:(int64_t)energyKcal proteinG:(ComposeAppDouble * _Nullable)proteinG lipidsG:(ComposeAppDouble * _Nullable)lipidsG carbohydratesG:(ComposeAppDouble * _Nullable)carbohydratesG fiverG:(ComposeAppDouble * _Nullable)fiverG vitaminAUgRe:(ComposeAppDouble * _Nullable)vitaminAUgRe ascorbicAcidMg:(ComposeAppDouble * _Nullable)ascorbicAcidMg folicAcidUg:(ComposeAppDouble * _Nullable)folicAcidUg ironNoHemMg:(ComposeAppDouble * _Nullable)ironNoHemMg potassiumMg:(ComposeAppDouble * _Nullable)potassiumMg hypoglycemicIndex:(ComposeAppDouble * _Nullable)hypoglycemicIndex hypoglycemicLoad:(ComposeAppDouble * _Nullable)hypoglycemicLoad sugarPerEquivalentG:(ComposeAppDouble * _Nullable)sugarPerEquivalentG calciumMg:(ComposeAppDouble * _Nullable)calciumMg ironMg:(ComposeAppDouble * _Nullable)ironMg sodiumMg:(ComposeAppDouble * _Nullable)sodiumMg cholesterolMg:(ComposeAppDouble * _Nullable)cholesterolMg seleniumMg:(ComposeAppDouble * _Nullable)seleniumMg phosphorusMg:(ComposeAppDouble * _Nullable)phosphorusMg agSaturatedG:(ComposeAppDouble * _Nullable)agSaturatedG agMonounsaturatedG:(ComposeAppDouble * _Nullable)agMonounsaturatedG agPolyunsaturatedG:(ComposeAppDouble * _Nullable)agPolyunsaturatedG __attribute__((swift_name("doCopy(id:category:idCategory:food:suggestedQuantity:unit:netWeightG:roundedGrossWeightG:energyKcal:proteinG:lipidsG:carbohydratesG:fiverG:vitaminAUgRe:ascorbicAcidMg:folicAcidUg:ironNoHemMg:potassiumMg:hypoglycemicIndex:hypoglycemicLoad:sugarPerEquivalentG:calciumMg:ironMg:sodiumMg:cholesterolMg:seleniumMg:phosphorusMg:agSaturatedG:agMonounsaturatedG:agPolyunsaturatedG:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppDouble * _Nullable agMonounsaturatedG __attribute__((swift_name("agMonounsaturatedG")));
@property (readonly) ComposeAppDouble * _Nullable agPolyunsaturatedG __attribute__((swift_name("agPolyunsaturatedG")));
@property (readonly) ComposeAppDouble * _Nullable agSaturatedG __attribute__((swift_name("agSaturatedG")));
@property (readonly) ComposeAppDouble * _Nullable ascorbicAcidMg __attribute__((swift_name("ascorbicAcidMg")));
@property (readonly) ComposeAppDouble * _Nullable calciumMg __attribute__((swift_name("calciumMg")));
@property (readonly) ComposeAppDouble * _Nullable carbohydratesG __attribute__((swift_name("carbohydratesG")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) ComposeAppDouble * _Nullable cholesterolMg __attribute__((swift_name("cholesterolMg")));
@property (readonly) int64_t energyKcal __attribute__((swift_name("energyKcal")));
@property (readonly) ComposeAppDouble * _Nullable fiverG __attribute__((swift_name("fiverG")));
@property (readonly) ComposeAppDouble * _Nullable folicAcidUg __attribute__((swift_name("folicAcidUg")));
@property (readonly) NSString *food __attribute__((swift_name("food")));
@property (readonly) ComposeAppDouble * _Nullable hypoglycemicIndex __attribute__((swift_name("hypoglycemicIndex")));
@property (readonly) ComposeAppDouble * _Nullable hypoglycemicLoad __attribute__((swift_name("hypoglycemicLoad")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t idCategory __attribute__((swift_name("idCategory")));
@property (readonly) ComposeAppDouble * _Nullable ironMg __attribute__((swift_name("ironMg")));
@property (readonly) ComposeAppDouble * _Nullable ironNoHemMg __attribute__((swift_name("ironNoHemMg")));
@property (readonly) ComposeAppDouble * _Nullable lipidsG __attribute__((swift_name("lipidsG")));
@property (readonly) NSString *netWeightG __attribute__((swift_name("netWeightG")));
@property (readonly) ComposeAppDouble * _Nullable phosphorusMg __attribute__((swift_name("phosphorusMg")));
@property (readonly) ComposeAppDouble * _Nullable potassiumMg __attribute__((swift_name("potassiumMg")));
@property (readonly) ComposeAppDouble * _Nullable proteinG __attribute__((swift_name("proteinG")));
@property (readonly) int64_t roundedGrossWeightG __attribute__((swift_name("roundedGrossWeightG")));
@property (readonly) ComposeAppDouble * _Nullable seleniumMg __attribute__((swift_name("seleniumMg")));
@property (readonly) ComposeAppDouble * _Nullable sodiumMg __attribute__((swift_name("sodiumMg")));
@property (readonly) ComposeAppDouble * _Nullable sugarPerEquivalentG __attribute__((swift_name("sugarPerEquivalentG")));
@property (readonly) double suggestedQuantity __attribute__((swift_name("suggestedQuantity")));
@property (readonly) NSString *unit __attribute__((swift_name("unit")));
@property (readonly) ComposeAppDouble * _Nullable vitaminAUgRe __attribute__((swift_name("vitaminAUgRe")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface ComposeAppDatabaseDriverFactory : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<ComposeAppRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end


/**
 * Mapper para convertir entre entidades de SQLDelight y modelos de dominio.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodMapper")))
@interface ComposeAppFoodMapper : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Mapper para convertir entre entidades de SQLDelight y modelos de dominio.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)foodMapper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppFoodMapper *shared __attribute__((swift_name("shared")));

/**
 * Convierte una entidad de SQLDelight (FoodEntity) a un modelo de dominio (Food).
 */
- (ComposeAppFood *)toDomainEntity:(ComposeAppFoodEntity *)entity __attribute__((swift_name("toDomain(entity:)")));
@end


/**
 * Modelo de respuesta para parsear el JSON de alimentos del SMAE.
 * Mapea los campos en español del JSON a las propiedades de la entidad.
 *
 * @author pelkidev
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodJsonResponse")))
@interface ComposeAppFoodJsonResponse : ComposeAppBase
- (instancetype)initWithAlimento:(NSString *)alimento cantidadSugerida:(ComposeAppDouble * _Nullable)cantidadSugerida unidad:(NSString *)unidad pesoBrutoRedondeado:(ComposeAppDouble * _Nullable)pesoBrutoRedondeado pesoNeto:(ComposeAppDouble * _Nullable)pesoNeto energiaKcal:(ComposeAppDouble * _Nullable)energiaKcal proteina:(ComposeAppFloat * _Nullable)proteina lipidos:(ComposeAppFloat * _Nullable)lipidos hidratosCarbono:(ComposeAppFloat * _Nullable)hidratosCarbono fibra:(ComposeAppFloat * _Nullable)fibra vitaminaA:(ComposeAppFloat * _Nullable)vitaminaA acidoAscorbico:(ComposeAppFloat * _Nullable)acidoAscorbico acidoFolico:(ComposeAppFloat * _Nullable)acidoFolico hierroNoHem:(ComposeAppFloat * _Nullable)hierroNoHem potasio:(ComposeAppFloat * _Nullable)potasio indiceGlicemico:(ComposeAppDouble * _Nullable)indiceGlicemico cargaGlicemica:(ComposeAppDouble * _Nullable)cargaGlicemica categoria:(NSString *)categoria idCategory:(ComposeAppDouble * _Nullable)idCategory azucarPorEquivalente:(ComposeAppFloat * _Nullable)azucarPorEquivalente calcio:(ComposeAppFloat * _Nullable)calcio hierro:(ComposeAppFloat * _Nullable)hierro sodio:(ComposeAppFloat * _Nullable)sodio colesterol:(ComposeAppFloat * _Nullable)colesterol selenioMg:(ComposeAppFloat * _Nullable)selenioMg fosforo:(ComposeAppFloat * _Nullable)fosforo agSaturados:(ComposeAppFloat * _Nullable)agSaturados agMonoinsaturados:(ComposeAppFloat * _Nullable)agMonoinsaturados agPolinsaturados:(ComposeAppFloat * _Nullable)agPolinsaturados __attribute__((swift_name("init(alimento:cantidadSugerida:unidad:pesoBrutoRedondeado:pesoNeto:energiaKcal:proteina:lipidos:hidratosCarbono:fibra:vitaminaA:acidoAscorbico:acidoFolico:hierroNoHem:potasio:indiceGlicemico:cargaGlicemica:categoria:idCategory:azucarPorEquivalente:calcio:hierro:sodio:colesterol:selenioMg:fosforo:agSaturados:agMonoinsaturados:agPolinsaturados:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppFoodJsonResponseCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppFoodJsonResponse *)doCopyAlimento:(NSString *)alimento cantidadSugerida:(ComposeAppDouble * _Nullable)cantidadSugerida unidad:(NSString *)unidad pesoBrutoRedondeado:(ComposeAppDouble * _Nullable)pesoBrutoRedondeado pesoNeto:(ComposeAppDouble * _Nullable)pesoNeto energiaKcal:(ComposeAppDouble * _Nullable)energiaKcal proteina:(ComposeAppFloat * _Nullable)proteina lipidos:(ComposeAppFloat * _Nullable)lipidos hidratosCarbono:(ComposeAppFloat * _Nullable)hidratosCarbono fibra:(ComposeAppFloat * _Nullable)fibra vitaminaA:(ComposeAppFloat * _Nullable)vitaminaA acidoAscorbico:(ComposeAppFloat * _Nullable)acidoAscorbico acidoFolico:(ComposeAppFloat * _Nullable)acidoFolico hierroNoHem:(ComposeAppFloat * _Nullable)hierroNoHem potasio:(ComposeAppFloat * _Nullable)potasio indiceGlicemico:(ComposeAppDouble * _Nullable)indiceGlicemico cargaGlicemica:(ComposeAppDouble * _Nullable)cargaGlicemica categoria:(NSString *)categoria idCategory:(ComposeAppDouble * _Nullable)idCategory azucarPorEquivalente:(ComposeAppFloat * _Nullable)azucarPorEquivalente calcio:(ComposeAppFloat * _Nullable)calcio hierro:(ComposeAppFloat * _Nullable)hierro sodio:(ComposeAppFloat * _Nullable)sodio colesterol:(ComposeAppFloat * _Nullable)colesterol selenioMg:(ComposeAppFloat * _Nullable)selenioMg fosforo:(ComposeAppFloat * _Nullable)fosforo agSaturados:(ComposeAppFloat * _Nullable)agSaturados agMonoinsaturados:(ComposeAppFloat * _Nullable)agMonoinsaturados agPolinsaturados:(ComposeAppFloat * _Nullable)agPolinsaturados __attribute__((swift_name("doCopy(alimento:cantidadSugerida:unidad:pesoBrutoRedondeado:pesoNeto:energiaKcal:proteina:lipidos:hidratosCarbono:fibra:vitaminaA:acidoAscorbico:acidoFolico:hierroNoHem:potasio:indiceGlicemico:cargaGlicemica:categoria:idCategory:azucarPorEquivalente:calcio:hierro:sodio:colesterol:selenioMg:fosforo:agSaturados:agMonoinsaturados:agPolinsaturados:)")));

/**
 * Modelo de respuesta para parsear el JSON de alimentos del SMAE.
 * Mapea los campos en español del JSON a las propiedades de la entidad.
 *
 * @author pelkidev
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Modelo de respuesta para parsear el JSON de alimentos del SMAE.
 * Mapea los campos en español del JSON a las propiedades de la entidad.
 *
 * @author pelkidev
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Convierte el modelo JSON a Food (modelo de dominio).
 */
- (ComposeAppFood *)toFood __attribute__((swift_name("toFood()")));

/**
 * Modelo de respuesta para parsear el JSON de alimentos del SMAE.
 * Mapea los campos en español del JSON a las propiedades de la entidad.
 *
 * @author pelkidev
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Acido Ascórbico (mg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable acidoAscorbico __attribute__((swift_name("acidoAscorbico")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Ácido Fólico (µg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable acidoFolico __attribute__((swift_name("acidoFolico")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="AG
Monoinsaturado s (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable agMonoinsaturados __attribute__((swift_name("agMonoinsaturados")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="AG
Polinsaturados (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable agPolinsaturados __attribute__((swift_name("agPolinsaturados")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="AG Saturados (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable agSaturados __attribute__((swift_name("agSaturados")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Alimento")
*/
@property (readonly) NSString *alimento __attribute__((swift_name("alimento")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Azúcar por equivalente (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable azucarPorEquivalente __attribute__((swift_name("azucarPorEquivalente")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Calcio (mg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable calcio __attribute__((swift_name("calcio")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Cantidad sugerida")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeDoubleSerializer))
*/
@property (readonly) ComposeAppDouble * _Nullable cantidadSugerida __attribute__((swift_name("cantidadSugerida")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Carga glicémica")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeDoubleSerializer))
*/
@property (readonly) ComposeAppDouble * _Nullable cargaGlicemica __attribute__((swift_name("cargaGlicemica")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Categoria")
*/
@property (readonly) NSString *categoria __attribute__((swift_name("categoria")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Colesterol (mg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable colesterol __attribute__((swift_name("colesterol")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Energía (Kcal)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeDoubleSerializer))
*/
@property (readonly) ComposeAppDouble * _Nullable energiaKcal __attribute__((swift_name("energiaKcal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Fibra (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable fibra __attribute__((swift_name("fibra")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Fósforo (mg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable fosforo __attribute__((swift_name("fosforo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Hidratos de carbono (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable hidratosCarbono __attribute__((swift_name("hidratosCarbono")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Hierro (mg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable hierro __attribute__((swift_name("hierro")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Hierro NO HEM (mg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable hierroNoHem __attribute__((swift_name("hierroNoHem")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idCategory")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeDoubleSerializer))
*/
@property (readonly) ComposeAppDouble * _Nullable idCategory __attribute__((swift_name("idCategory")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Índice glicémico")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeDoubleSerializer))
*/
@property (readonly) ComposeAppDouble * _Nullable indiceGlicemico __attribute__((swift_name("indiceGlicemico")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Lípidos (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable lipidos __attribute__((swift_name("lipidos")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Peso bruto redondeado (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeDoubleSerializer))
*/
@property (readonly) ComposeAppDouble * _Nullable pesoBrutoRedondeado __attribute__((swift_name("pesoBrutoRedondeado")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Peso neto (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeDoubleSerializer))
*/
@property (readonly) ComposeAppDouble * _Nullable pesoNeto __attribute__((swift_name("pesoNeto")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Potasio (mg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable potasio __attribute__((swift_name("potasio")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Proteína (g)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable proteina __attribute__((swift_name("proteina")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Selenio (mg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable selenioMg __attribute__((swift_name("selenioMg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sodio (mg)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable sodio __attribute__((swift_name("sodio")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Unidad")
*/
@property (readonly) NSString *unidad __attribute__((swift_name("unidad")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Vitamina A (µg RE)")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=litechnology/com/mx/planalimenticiokmp/data/model/SafeFloatSerializer))
*/
@property (readonly) ComposeAppFloat * _Nullable vitaminaA __attribute__((swift_name("vitaminaA")));
@end


/**
 * Modelo de respuesta para parsear el JSON de alimentos del SMAE.
 * Mapea los campos en español del JSON a las propiedades de la entidad.
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodJsonResponse.Companion")))
@interface ComposeAppFoodJsonResponseCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Modelo de respuesta para parsear el JSON de alimentos del SMAE.
 * Mapea los campos en español del JSON a las propiedades de la entidad.
 *
 * @author pelkidev
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppFoodJsonResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * Modelo de respuesta para parsear el JSON de alimentos del SMAE.
 * Mapea los campos en español del JSON a las propiedades de la entidad.
 *
 * @author pelkidev
 */
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol ComposeAppKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<ComposeAppKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<ComposeAppKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol ComposeAppKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<ComposeAppKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<ComposeAppKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol ComposeAppKotlinx_serialization_coreKSerializer <ComposeAppKotlinx_serialization_coreSerializationStrategy, ComposeAppKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SafeDoubleSerializer")))
@interface ComposeAppSafeDoubleSerializer : ComposeAppBase <ComposeAppKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)safeDoubleSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSafeDoubleSerializer *shared __attribute__((swift_name("shared")));
- (ComposeAppDouble * _Nullable)deserializeDecoder:(id<ComposeAppKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<ComposeAppKotlinx_serialization_coreEncoder>)encoder value:(ComposeAppDouble * _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<ComposeAppKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserializador seguro que maneja valores numéricos como String o Number,
 * limpiando formatos inválidos (como "1.4." o múltiples puntos).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SafeFloatSerializer")))
@interface ComposeAppSafeFloatSerializer : ComposeAppBase <ComposeAppKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Deserializador seguro que maneja valores numéricos como String o Number,
 * limpiando formatos inválidos (como "1.4." o múltiples puntos).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)safeFloatSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppSafeFloatSerializer *shared __attribute__((swift_name("shared")));
- (ComposeAppFloat * _Nullable)deserializeDecoder:(id<ComposeAppKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<ComposeAppKotlinx_serialization_coreEncoder>)encoder value:(ComposeAppFloat * _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<ComposeAppKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("CategoryRepository")))
@protocol ComposeAppCategoryRepository
@required
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getAllCategories __attribute__((swift_name("getAllCategories()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllCategoriesSuspendWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllCategoriesSuspend(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CategoryRepositoryImpl")))
@interface ComposeAppCategoryRepositoryImpl : ComposeAppBase <ComposeAppCategoryRepository>
- (instancetype)initWithDatabase:(id<ComposeAppFoodDatabase>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getAllCategories __attribute__((swift_name("getAllCategories()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllCategoriesSuspendWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllCategoriesSuspend(completionHandler:)")));
@end

__attribute__((swift_name("FoodRepository")))
@protocol ComposeAppFoodRepository
@required
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getAllFoods __attribute__((swift_name("getAllFoods()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllFoodsSuspendWithCompletionHandler:(void (^)(NSArray<ComposeAppFood *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllFoodsSuspend(completionHandler:)")));
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getFoodByIdId:(int64_t)id __attribute__((swift_name("getFoodById(id:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFoodByIdSuspendId:(int64_t)id completionHandler:(void (^)(ComposeAppFood * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFoodByIdSuspend(id:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFoodCountByCategoryCategory:(NSString *)category completionHandler:(void (^)(ComposeAppInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFoodCountByCategory(category:completionHandler:)")));
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getFoodsByCategoryCategory:(NSString *)category __attribute__((swift_name("getFoodsByCategory(category:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFoodsByCategorySuspendCategory:(NSString *)category completionHandler:(void (^)(NSArray<ComposeAppFood *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFoodsByCategorySuspend(category:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertAllFoodsFoods:(NSArray<ComposeAppFood *> *)foods completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertAllFoods(foods:completionHandler:)")));
- (id<ComposeAppKotlinx_coroutines_coreFlow>)searchFoodsSearchQuery:(NSString *)searchQuery __attribute__((swift_name("searchFoods(searchQuery:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchFoodsSuspendSearchQuery:(NSString *)searchQuery completionHandler:(void (^)(NSArray<ComposeAppFood *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchFoodsSuspend(searchQuery:completionHandler:)")));
@end


/**
 * Implementación del repositorio de alimentos.
 * Gestiona el acceso a los datos de la tabla de alimentos utilizando SQLDelight.
 *
 * @property database Instancia de [FoodDatabase] generada por SQLDelight.
 * @author PelkiDev
 * @version 1.0.0
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FoodRepositoryImpl")))
@interface ComposeAppFoodRepositoryImpl : ComposeAppBase <ComposeAppFoodRepository>
- (instancetype)initWithDatabase:(id<ComposeAppFoodDatabase>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));

/**
 * Obtiene un flujo con todos los alimentos disponibles en la base de datos.
 *
 * @return [Flow] con la lista completa de [Food].
 */
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getAllFoods __attribute__((swift_name("getAllFoods()")));

/**
 * Obtiene de forma suspendida todos los alimentos de la base de datos.
 *
 * @return Lista completa de modelos de dominio [Food].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllFoodsSuspendWithCompletionHandler:(void (^)(NSArray<ComposeAppFood *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllFoodsSuspend(completionHandler:)")));

/**
 * Obtiene un flujo con un alimento específico mediante su identificador.
 *
 * @param id Identificador único del alimento.
 * @return [Flow] que emite el alimento [Food] o nulo si no se encuentra.
 */
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getFoodByIdId:(int64_t)id __attribute__((swift_name("getFoodById(id:)")));

/**
 * Obtiene de forma suspendida un alimento específico por su ID.
 *
 * @param id Identificador único del alimento.
 * @return Modelo [Food] o nulo si no existe en la base de datos.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFoodByIdSuspendId:(int64_t)id completionHandler:(void (^)(ComposeAppFood * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFoodByIdSuspend(id:completionHandler:)")));

/**
 * Obtiene el número total de alimentos registrados en una categoría específica.
 *
 * @param category Nombre de la categoría.
 * @return Cantidad total de alimentos en dicha categoría.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFoodCountByCategoryCategory:(NSString *)category completionHandler:(void (^)(ComposeAppInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFoodCountByCategory(category:completionHandler:)")));

/**
 * Obtiene un flujo de alimentos filtrados por categoría.
 *
 * @param category Nombre de la categoría a filtrar.
 * @return [Flow] que contiene la lista de alimentos [Food] de la categoría especificada.
 */
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getFoodsByCategoryCategory:(NSString *)category __attribute__((swift_name("getFoodsByCategory(category:)")));

/**
 * Obtiene de forma suspendida la lista de alimentos por categoría.
 *
 * @param category Nombre de la categoría a filtrar.
 * @return Lista de modelos de dominio [Food].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFoodsByCategorySuspendCategory:(NSString *)category completionHandler:(void (^)(NSArray<ComposeAppFood *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFoodsByCategorySuspend(category:completionHandler:)")));

/**
 * Inserta una lista completa de alimentos en la base de datos de forma atómica.
 * Utiliza una transacción para optimizar el rendimiento de la inserción masiva.
 *
 * @param foods Lista de alimentos [Food] a insertar.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertAllFoodsFoods:(NSArray<ComposeAppFood *> *)foods completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertAllFoods(foods:completionHandler:)")));

/**
 * Realiza una búsqueda de alimentos por nombre.
 *
 * @param searchQuery Término de búsqueda.
 * @return [Flow] con la lista de alimentos que coinciden con la búsqueda.
 */
- (id<ComposeAppKotlinx_coroutines_coreFlow>)searchFoodsSearchQuery:(NSString *)searchQuery __attribute__((swift_name("searchFoods(searchQuery:)")));

/**
 * Realiza una búsqueda suspendida de alimentos por nombre.
 *
 * @param searchQuery Término de búsqueda.
 * @return Lista de alimentos que coinciden con el criterio.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchFoodsSuspendSearchQuery:(NSString *)searchQuery completionHandler:(void (^)(NSArray<ComposeAppFood *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchFoodsSuspend(searchQuery:completionHandler:)")));
@end


/**
 * Modelo de dominio para un alimento.
 * Representa un alimento del Sistema Mexicano de Alimentos y Equivalentes (SMAE).
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Food")))
@interface ComposeAppFood : ComposeAppBase
- (instancetype)initWithId:(int64_t)id category:(NSString *)category idCategory:(int32_t)idCategory food:(NSString *)food suggestedQuantity:(float)suggestedQuantity unit:(NSString *)unit netWeightG:(NSString *)netWeightG roundedGrossWeightG:(int32_t)roundedGrossWeightG energyKcal:(int32_t)energyKcal proteinG:(ComposeAppFloat * _Nullable)proteinG lipidsG:(ComposeAppFloat * _Nullable)lipidsG carbohydratesG:(ComposeAppFloat * _Nullable)carbohydratesG fiverG:(ComposeAppFloat * _Nullable)fiverG vitaminAUgRe:(ComposeAppFloat * _Nullable)vitaminAUgRe ascorbicAcidMg:(ComposeAppFloat * _Nullable)ascorbicAcidMg folicAcidUg:(ComposeAppFloat * _Nullable)folicAcidUg ironNoHemMg:(ComposeAppFloat * _Nullable)ironNoHemMg potassiumMg:(ComposeAppFloat * _Nullable)potassiumMg hypoglycemicIndex:(ComposeAppFloat * _Nullable)hypoglycemicIndex hypoglycemicLoad:(ComposeAppFloat * _Nullable)hypoglycemicLoad sugarPerEquivalentG:(ComposeAppFloat * _Nullable)sugarPerEquivalentG calciumMg:(ComposeAppFloat * _Nullable)calciumMg ironMg:(ComposeAppFloat * _Nullable)ironMg sodiumMg:(ComposeAppFloat * _Nullable)sodiumMg cholesterolMg:(ComposeAppFloat * _Nullable)cholesterolMg seleniumMg:(ComposeAppFloat * _Nullable)seleniumMg phosphorusMg:(ComposeAppFloat * _Nullable)phosphorusMg agSaturatedG:(ComposeAppFloat * _Nullable)agSaturatedG agMonounsaturatedG:(ComposeAppFloat * _Nullable)agMonounsaturatedG agPolyunsaturatedG:(ComposeAppFloat * _Nullable)agPolyunsaturatedG __attribute__((swift_name("init(id:category:idCategory:food:suggestedQuantity:unit:netWeightG:roundedGrossWeightG:energyKcal:proteinG:lipidsG:carbohydratesG:fiverG:vitaminAUgRe:ascorbicAcidMg:folicAcidUg:ironNoHemMg:potassiumMg:hypoglycemicIndex:hypoglycemicLoad:sugarPerEquivalentG:calciumMg:ironMg:sodiumMg:cholesterolMg:seleniumMg:phosphorusMg:agSaturatedG:agMonounsaturatedG:agPolyunsaturatedG:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppFood *)doCopyId:(int64_t)id category:(NSString *)category idCategory:(int32_t)idCategory food:(NSString *)food suggestedQuantity:(float)suggestedQuantity unit:(NSString *)unit netWeightG:(NSString *)netWeightG roundedGrossWeightG:(int32_t)roundedGrossWeightG energyKcal:(int32_t)energyKcal proteinG:(ComposeAppFloat * _Nullable)proteinG lipidsG:(ComposeAppFloat * _Nullable)lipidsG carbohydratesG:(ComposeAppFloat * _Nullable)carbohydratesG fiverG:(ComposeAppFloat * _Nullable)fiverG vitaminAUgRe:(ComposeAppFloat * _Nullable)vitaminAUgRe ascorbicAcidMg:(ComposeAppFloat * _Nullable)ascorbicAcidMg folicAcidUg:(ComposeAppFloat * _Nullable)folicAcidUg ironNoHemMg:(ComposeAppFloat * _Nullable)ironNoHemMg potassiumMg:(ComposeAppFloat * _Nullable)potassiumMg hypoglycemicIndex:(ComposeAppFloat * _Nullable)hypoglycemicIndex hypoglycemicLoad:(ComposeAppFloat * _Nullable)hypoglycemicLoad sugarPerEquivalentG:(ComposeAppFloat * _Nullable)sugarPerEquivalentG calciumMg:(ComposeAppFloat * _Nullable)calciumMg ironMg:(ComposeAppFloat * _Nullable)ironMg sodiumMg:(ComposeAppFloat * _Nullable)sodiumMg cholesterolMg:(ComposeAppFloat * _Nullable)cholesterolMg seleniumMg:(ComposeAppFloat * _Nullable)seleniumMg phosphorusMg:(ComposeAppFloat * _Nullable)phosphorusMg agSaturatedG:(ComposeAppFloat * _Nullable)agSaturatedG agMonounsaturatedG:(ComposeAppFloat * _Nullable)agMonounsaturatedG agPolyunsaturatedG:(ComposeAppFloat * _Nullable)agPolyunsaturatedG __attribute__((swift_name("doCopy(id:category:idCategory:food:suggestedQuantity:unit:netWeightG:roundedGrossWeightG:energyKcal:proteinG:lipidsG:carbohydratesG:fiverG:vitaminAUgRe:ascorbicAcidMg:folicAcidUg:ironNoHemMg:potassiumMg:hypoglycemicIndex:hypoglycemicLoad:sugarPerEquivalentG:calciumMg:ironMg:sodiumMg:cholesterolMg:seleniumMg:phosphorusMg:agSaturatedG:agMonounsaturatedG:agPolyunsaturatedG:)")));

/**
 * Modelo de dominio para un alimento.
 * Representa un alimento del Sistema Mexicano de Alimentos y Equivalentes (SMAE).
 *
 * @author pelkidev
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Modelo de dominio para un alimento.
 * Representa un alimento del Sistema Mexicano de Alimentos y Equivalentes (SMAE).
 *
 * @author pelkidev
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Modelo de dominio para un alimento.
 * Representa un alimento del Sistema Mexicano de Alimentos y Equivalentes (SMAE).
 *
 * @author pelkidev
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppFloat * _Nullable agMonounsaturatedG __attribute__((swift_name("agMonounsaturatedG")));
@property (readonly) ComposeAppFloat * _Nullable agPolyunsaturatedG __attribute__((swift_name("agPolyunsaturatedG")));
@property (readonly) ComposeAppFloat * _Nullable agSaturatedG __attribute__((swift_name("agSaturatedG")));
@property (readonly) ComposeAppFloat * _Nullable ascorbicAcidMg __attribute__((swift_name("ascorbicAcidMg")));
@property (readonly) ComposeAppFloat * _Nullable calciumMg __attribute__((swift_name("calciumMg")));
@property (readonly) ComposeAppFloat * _Nullable carbohydratesG __attribute__((swift_name("carbohydratesG")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) ComposeAppFloat * _Nullable cholesterolMg __attribute__((swift_name("cholesterolMg")));
@property (readonly) int32_t energyKcal __attribute__((swift_name("energyKcal")));
@property (readonly) ComposeAppFloat * _Nullable fiverG __attribute__((swift_name("fiverG")));
@property (readonly) ComposeAppFloat * _Nullable folicAcidUg __attribute__((swift_name("folicAcidUg")));
@property (readonly) NSString *food __attribute__((swift_name("food")));
@property (readonly) ComposeAppFloat * _Nullable hypoglycemicIndex __attribute__((swift_name("hypoglycemicIndex")));
@property (readonly) ComposeAppFloat * _Nullable hypoglycemicLoad __attribute__((swift_name("hypoglycemicLoad")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t idCategory __attribute__((swift_name("idCategory")));
@property (readonly) ComposeAppFloat * _Nullable ironMg __attribute__((swift_name("ironMg")));
@property (readonly) ComposeAppFloat * _Nullable ironNoHemMg __attribute__((swift_name("ironNoHemMg")));
@property (readonly) ComposeAppFloat * _Nullable lipidsG __attribute__((swift_name("lipidsG")));
@property (readonly) NSString *netWeightG __attribute__((swift_name("netWeightG")));
@property (readonly) ComposeAppFloat * _Nullable phosphorusMg __attribute__((swift_name("phosphorusMg")));
@property (readonly) ComposeAppFloat * _Nullable potassiumMg __attribute__((swift_name("potassiumMg")));
@property (readonly) ComposeAppFloat * _Nullable proteinG __attribute__((swift_name("proteinG")));
@property (readonly) int32_t roundedGrossWeightG __attribute__((swift_name("roundedGrossWeightG")));
@property (readonly) ComposeAppFloat * _Nullable seleniumMg __attribute__((swift_name("seleniumMg")));
@property (readonly) ComposeAppFloat * _Nullable sodiumMg __attribute__((swift_name("sodiumMg")));
@property (readonly) ComposeAppFloat * _Nullable sugarPerEquivalentG __attribute__((swift_name("sugarPerEquivalentG")));
@property (readonly) float suggestedQuantity __attribute__((swift_name("suggestedQuantity")));
@property (readonly) NSString *unit __attribute__((swift_name("unit")));
@property (readonly) ComposeAppFloat * _Nullable vitaminAUgRe __attribute__((swift_name("vitaminAUgRe")));
@end


/**
 * Caso de uso para obtener todas las categorías de alimentos disponibles.
 * Retorna las categorías del Sistema Mexicano de Alimentos y Equivalentes.
 *
 * @param repository Repositorio de categorías
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllCategoriesUseCase")))
@interface ComposeAppGetAllCategoriesUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppCategoryRepository>)repository dispatcher:(ComposeAppAppDispatchers *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 * Ejecuta el caso de uso y retorna un Flow con todas las categorías.
 *
 * @return Flow que emite una lista de nombres de categorías
 */
- (id<ComposeAppKotlinx_coroutines_coreFlow>)invoke __attribute__((swift_name("invoke()")));

/**
 * Ejecuta el caso de uso y retorna una lista suspendida con todas las categorías.
 *
 * @return Lista de nombres de categorías
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSuspendWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invokeSuspend(completionHandler:)")));
@end


/**
 * Caso de uso para obtener todos los alimentos almacenados.
 * Retorna todos los alimentos del Sistema Mexicano de Alimentos y Equivalentes.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllFoodsUseCase")))
@interface ComposeAppGetAllFoodsUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppFoodRepository>)repository dispatcher:(ComposeAppAppDispatchers *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 * Ejecuta el caso de uso y retorna un Flow con todos los alimentos.
 *
 * @return Flow que emite una lista de todos los alimentos
 */
- (id<ComposeAppKotlinx_coroutines_coreFlow>)invoke __attribute__((swift_name("invoke()")));

/**
 * Ejecuta el caso de uso y retorna una lista suspendida con todos los alimentos.
 *
 * @return Lista de todos los alimentos
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSuspendWithCompletionHandler:(void (^)(NSArray<ComposeAppFood *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invokeSuspend(completionHandler:)")));
@end


/**
 * Caso de uso para obtener un alimento específico por su ID.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFoodByIdUseCase")))
@interface ComposeAppGetFoodByIdUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppFoodRepository>)repository dispatcher:(ComposeAppAppDispatchers *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 * Ejecuta el caso de uso y retorna un Flow con el alimento encontrado.
 *
 * @param id ID del alimento
 * @return Flow que emite el alimento encontrado o null si no existe
 */
- (id<ComposeAppKotlinx_coroutines_coreFlow>)invokeId:(int64_t)id __attribute__((swift_name("invoke(id:)")));

/**
 * Ejecuta el caso de uso y retorna el alimento encontrado.
 *
 * @param id ID del alimento
 * @return El alimento encontrado o null si no existe
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSuspendId:(int64_t)id completionHandler:(void (^)(ComposeAppFood * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invokeSuspend(id:completionHandler:)")));
@end


/**
 * Caso de uso para obtener el conteo de alimentos por categoría.
 * Útil para mostrar estadísticas o validar si una categoría tiene alimentos.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFoodCountByCategoryUseCase")))
@interface ComposeAppGetFoodCountByCategoryUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppFoodRepository>)repository dispatcher:(ComposeAppAppDispatchers *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 * Ejecuta el caso de uso y retorna el número de alimentos en la categoría.
 *
 * @param category Nombre de la categoría
 * @return Número de alimentos en la categoría especificada
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeCategory:(NSString *)category completionHandler:(void (^)(ComposeAppInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(category:completionHandler:)")));
@end


/**
 * Caso de uso para obtener alimentos por categoría.
 * Obtiene todos los alimentos de una categoría específica del Sistema Mexicano de Alimentos y Equivalentes.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFoodsByCategoryUseCase")))
@interface ComposeAppGetFoodsByCategoryUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppFoodRepository>)repository dispatcher:(ComposeAppAppDispatchers *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 * Ejecuta el caso de uso y retorna un Flow con los alimentos de la categoría.
 *
 * @param category Nombre de la categoría (ej: "VERDURAS", "FRUTAS", "CEREALES SIN GRASA", etc.)
 * @return Flow que emite una lista de alimentos de la categoría especificada
 */
- (id<ComposeAppKotlinx_coroutines_coreFlow>)invokeCategory:(NSString *)category __attribute__((swift_name("invoke(category:)")));

/**
 * Ejecuta el caso de uso y retorna una lista suspendida con los alimentos de la categoría.
 *
 * @param category Nombre de la categoría
 * @return Lista de alimentos de la categoría especificada
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSuspendCategory:(NSString *)category completionHandler:(void (^)(NSArray<ComposeAppFood *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invokeSuspend(category:completionHandler:)")));
@end


/**
 * Caso de uso para buscar alimentos por nombre.
 * Realiza una búsqueda parcial (case-insensitive) en los nombres de los alimentos.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFoodsUseCase")))
@interface ComposeAppSearchFoodsUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppFoodRepository>)repository dispatcher:(ComposeAppAppDispatchers *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 * Ejecuta el caso de uso y retorna un Flow con los alimentos que coinciden con la búsqueda.
 *
 * @param searchQuery Término de búsqueda (ej: "manzana", "pollo", etc.)
 * @return Flow que emite una lista de alimentos que coinciden con la búsqueda
 */
- (id<ComposeAppKotlinx_coroutines_coreFlow>)invokeSearchQuery:(NSString *)searchQuery __attribute__((swift_name("invoke(searchQuery:)")));

/**
 * Ejecuta el caso de uso y retorna una lista suspendida con los alimentos que coinciden.
 *
 * @param searchQuery Término de búsqueda
 * @return Lista de alimentos que coinciden con la búsqueda
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSuspendSearchQuery:(NSString *)searchQuery completionHandler:(void (^)(NSArray<ComposeAppFood *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invokeSuspend(searchQuery:completionHandler:)")));
@end


/**
 * Caso de uso para inicializar la base de datos con los datos del SMAE.
 * Se ejecuta la primera vez que se abre la aplicación para poblar la base de datos
 * con los alimentos del Sistema Mexicano de Alimentos y Equivalentes.
 *
 * @param databaseInitializer Inicializador de la base de datos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializeDataBaseUseCase")))
@interface ComposeAppInitializeDataBaseUseCase : ComposeAppBase
- (instancetype)initWithDatabaseInitializer:(ComposeAppDatabaseInitializer *)databaseInitializer __attribute__((swift_name("init(databaseInitializer:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(ComposeAppInitializeResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("InitializeResult")))
@interface ComposeAppInitializeResult : ComposeAppBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializeResult.AlreadyInitialized")))
@interface ComposeAppInitializeResultAlreadyInitialized : ComposeAppInitializeResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInitialized __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppInitializeResultAlreadyInitialized *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializeResult.Error")))
@interface ComposeAppInitializeResultError : ComposeAppInitializeResult
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializeResult.Success")))
@interface ComposeAppInitializeResultSuccess : ComposeAppInitializeResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppInitializeResultSuccess *shared __attribute__((swift_name("shared")));
@end


/**
 * Enum que representa los diferentes tipos de mensajes toast.
 *
 * @author Pelkidev
 * @version 1.0.0
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToastType")))
@interface ComposeAppToastType : ComposeAppKotlinEnum<ComposeAppToastType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enum que representa los diferentes tipos de mensajes toast.
 *
 * @author Pelkidev
 * @version 1.0.0
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppToastType *success __attribute__((swift_name("success")));
@property (class, readonly) ComposeAppToastType *error __attribute__((swift_name("error")));
@property (class, readonly) ComposeAppToastType *warning __attribute__((swift_name("warning")));
@property (class, readonly) ComposeAppToastType *informative __attribute__((swift_name("informative")));
+ (ComposeAppKotlinArray<ComposeAppToastType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppToastType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuState")))
@interface ComposeAppMenuState : ComposeAppBase
- (instancetype)initWithCategoryList:(NSArray<ComposeAppModelItemCard *> * _Nullable)categoryList __attribute__((swift_name("init(categoryList:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppMenuState *)doCopyCategoryList:(NSArray<ComposeAppModelItemCard *> * _Nullable)categoryList __attribute__((swift_name("doCopy(categoryList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<ComposeAppModelItemCard *> * _Nullable categoryList __attribute__((swift_name("categoryList")));
@end

__attribute__((swift_name("Lifecycle_viewmodelViewModel")))
@interface ComposeAppLifecycle_viewmodelViewModel : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCloseables:(ComposeAppKotlinArray<id<ComposeAppKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(closeables:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithViewModelScope:(id<ComposeAppKotlinx_coroutines_coreCoroutineScope>)viewModelScope __attribute__((swift_name("init(viewModelScope:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithViewModelScope:(id<ComposeAppKotlinx_coroutines_coreCoroutineScope>)viewModelScope closeables:(ComposeAppKotlinArray<id<ComposeAppKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(viewModelScope:closeables:)"))) __attribute__((objc_designated_initializer));
- (void)addCloseableCloseable:(id<ComposeAppKotlinAutoCloseable>)closeable __attribute__((swift_name("addCloseable(closeable:)")));
- (void)addCloseableKey:(NSString *)key closeable:(id<ComposeAppKotlinAutoCloseable>)closeable __attribute__((swift_name("addCloseable(key:closeable:)")));
- (id<ComposeAppKotlinAutoCloseable> _Nullable)getCloseableKey:(NSString *)key __attribute__((swift_name("getCloseable(key:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCleared __attribute__((swift_name("onCleared()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuViewModel")))
@interface ComposeAppMenuViewModel : ComposeAppLifecycle_viewmodelViewModel
- (instancetype)initWithGetAllCategoriesUseCase:(ComposeAppGetAllCategoriesUseCase *)getAllCategoriesUseCase initializeDataBaseUseCase:(ComposeAppInitializeDataBaseUseCase *)initializeDataBaseUseCase __attribute__((swift_name("init(getAllCategoriesUseCase:initializeDataBaseUseCase:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCloseables:(ComposeAppKotlinArray<id<ComposeAppKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<ComposeAppKotlinx_coroutines_coreCoroutineScope>)viewModelScope __attribute__((swift_name("init(viewModelScope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<ComposeAppKotlinx_coroutines_coreCoroutineScope>)viewModelScope closeables:(ComposeAppKotlinArray<id<ComposeAppKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(viewModelScope:closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * Obtiene las categorías de la base de datos.
 * Asegura que la base de datos esté inicializada antes de cargar las categorías.
 */
- (void)getCategories __attribute__((swift_name("getCategories()")));
@property (readonly) ComposeAppKermitLogger *logger __attribute__((swift_name("logger")));

/** El estado de la UI para la pantalla. */
@property (readonly) id<ComposeAppKotlinx_coroutines_coreStateFlow> uiState __attribute__((swift_name("uiState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDispatchers")))
@interface ComposeAppAppDispatchers : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)appDispatchers __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppAppDispatchers *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *default_ __attribute__((swift_name("default_")));
@property (readonly) ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *io __attribute__((swift_name("io")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants")))
@interface ComposeAppConstants : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)constants __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppConstants *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *NAME_JSON __attribute__((swift_name("NAME_JSON")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelItemCard")))
@interface ComposeAppModelItemCard : ComposeAppBase
- (instancetype)initWithIdCard:(int32_t)idCard idCategory:(int32_t)idCategory title:(NSString *)title __attribute__((swift_name("init(idCard:idCategory:title:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppModelItemCard *)doCopyIdCard:(int32_t)idCard idCategory:(int32_t)idCategory title:(NSString *)title __attribute__((swift_name("doCopy(idCard:idCategory:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t idCard __attribute__((swift_name("idCard")));
@property (readonly) int32_t idCategory __attribute__((swift_name("idCategory")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelRegex")))
@interface ComposeAppModelRegex : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)modelRegex __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppModelRegex *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppKotlinRegex *PRIMITIVE_TEXT __attribute__((swift_name("PRIMITIVE_TEXT")));
@property (readonly) ComposeAppKotlinRegex *SIMPLE_TEXT __attribute__((swift_name("SIMPLE_TEXT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelSubItemCard")))
@interface ComposeAppModelSubItemCard : ComposeAppBase
- (instancetype)initWithIdCard:(int32_t)idCard idCategory:(int32_t)idCategory foodTitle:(NSString *)foodTitle suggestedQuantity:(NSString *)suggestedQuantity netWeightG:(NSString *)netWeightG roundedGrossWeightG:(NSString *)roundedGrossWeightG energyKcal:(NSString *)energyKcal proteinG:(NSString * _Nullable)proteinG lipidsG:(NSString * _Nullable)lipidsG carbohydratesG:(NSString * _Nullable)carbohydratesG fiverG:(NSString * _Nullable)fiverG vitaminAUgRe:(NSString * _Nullable)vitaminAUgRe ascorbicAcidMg:(NSString * _Nullable)ascorbicAcidMg folicAcidUg:(NSString * _Nullable)folicAcidUg ironNoHemMg:(NSString * _Nullable)ironNoHemMg potassiumMg:(NSString * _Nullable)potassiumMg hypoglycemicIndex:(NSString * _Nullable)hypoglycemicIndex hypoglycemicLoad:(NSString * _Nullable)hypoglycemicLoad sugarPerEquivalentG:(NSString * _Nullable)sugarPerEquivalentG calciumMg:(NSString * _Nullable)calciumMg ironMg:(NSString * _Nullable)ironMg sodiumMg:(NSString * _Nullable)sodiumMg cholesterolMg:(NSString * _Nullable)cholesterolMg seleniumMg:(NSString * _Nullable)seleniumMg phosphorusMg:(NSString * _Nullable)phosphorusMg agSaturatedG:(NSString * _Nullable)agSaturatedG agMonounsaturatedG:(NSString * _Nullable)agMonounsaturatedG agPolyunsaturatedG:(NSString * _Nullable)agPolyunsaturatedG __attribute__((swift_name("init(idCard:idCategory:foodTitle:suggestedQuantity:netWeightG:roundedGrossWeightG:energyKcal:proteinG:lipidsG:carbohydratesG:fiverG:vitaminAUgRe:ascorbicAcidMg:folicAcidUg:ironNoHemMg:potassiumMg:hypoglycemicIndex:hypoglycemicLoad:sugarPerEquivalentG:calciumMg:ironMg:sodiumMg:cholesterolMg:seleniumMg:phosphorusMg:agSaturatedG:agMonounsaturatedG:agPolyunsaturatedG:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppModelSubItemCard *)doCopyIdCard:(int32_t)idCard idCategory:(int32_t)idCategory foodTitle:(NSString *)foodTitle suggestedQuantity:(NSString *)suggestedQuantity netWeightG:(NSString *)netWeightG roundedGrossWeightG:(NSString *)roundedGrossWeightG energyKcal:(NSString *)energyKcal proteinG:(NSString * _Nullable)proteinG lipidsG:(NSString * _Nullable)lipidsG carbohydratesG:(NSString * _Nullable)carbohydratesG fiverG:(NSString * _Nullable)fiverG vitaminAUgRe:(NSString * _Nullable)vitaminAUgRe ascorbicAcidMg:(NSString * _Nullable)ascorbicAcidMg folicAcidUg:(NSString * _Nullable)folicAcidUg ironNoHemMg:(NSString * _Nullable)ironNoHemMg potassiumMg:(NSString * _Nullable)potassiumMg hypoglycemicIndex:(NSString * _Nullable)hypoglycemicIndex hypoglycemicLoad:(NSString * _Nullable)hypoglycemicLoad sugarPerEquivalentG:(NSString * _Nullable)sugarPerEquivalentG calciumMg:(NSString * _Nullable)calciumMg ironMg:(NSString * _Nullable)ironMg sodiumMg:(NSString * _Nullable)sodiumMg cholesterolMg:(NSString * _Nullable)cholesterolMg seleniumMg:(NSString * _Nullable)seleniumMg phosphorusMg:(NSString * _Nullable)phosphorusMg agSaturatedG:(NSString * _Nullable)agSaturatedG agMonounsaturatedG:(NSString * _Nullable)agMonounsaturatedG agPolyunsaturatedG:(NSString * _Nullable)agPolyunsaturatedG __attribute__((swift_name("doCopy(idCard:idCategory:foodTitle:suggestedQuantity:netWeightG:roundedGrossWeightG:energyKcal:proteinG:lipidsG:carbohydratesG:fiverG:vitaminAUgRe:ascorbicAcidMg:folicAcidUg:ironNoHemMg:potassiumMg:hypoglycemicIndex:hypoglycemicLoad:sugarPerEquivalentG:calciumMg:ironMg:sodiumMg:cholesterolMg:seleniumMg:phosphorusMg:agSaturatedG:agMonounsaturatedG:agPolyunsaturatedG:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable agMonounsaturatedG __attribute__((swift_name("agMonounsaturatedG")));
@property (readonly) NSString * _Nullable agPolyunsaturatedG __attribute__((swift_name("agPolyunsaturatedG")));
@property (readonly) NSString * _Nullable agSaturatedG __attribute__((swift_name("agSaturatedG")));
@property (readonly) NSString * _Nullable ascorbicAcidMg __attribute__((swift_name("ascorbicAcidMg")));
@property (readonly) NSString * _Nullable calciumMg __attribute__((swift_name("calciumMg")));
@property (readonly) NSString * _Nullable carbohydratesG __attribute__((swift_name("carbohydratesG")));
@property (readonly) NSString * _Nullable cholesterolMg __attribute__((swift_name("cholesterolMg")));
@property (readonly) NSString *energyKcal __attribute__((swift_name("energyKcal")));
@property (readonly) NSString * _Nullable fiverG __attribute__((swift_name("fiverG")));
@property (readonly) NSString * _Nullable folicAcidUg __attribute__((swift_name("folicAcidUg")));
@property (readonly) NSString *foodTitle __attribute__((swift_name("foodTitle")));
@property (readonly) NSString * _Nullable hypoglycemicIndex __attribute__((swift_name("hypoglycemicIndex")));
@property (readonly) NSString * _Nullable hypoglycemicLoad __attribute__((swift_name("hypoglycemicLoad")));
@property (readonly) int32_t idCard __attribute__((swift_name("idCard")));
@property (readonly) int32_t idCategory __attribute__((swift_name("idCategory")));
@property (readonly) NSString * _Nullable ironMg __attribute__((swift_name("ironMg")));
@property (readonly) NSString * _Nullable ironNoHemMg __attribute__((swift_name("ironNoHemMg")));
@property (readonly) NSString * _Nullable lipidsG __attribute__((swift_name("lipidsG")));
@property (readonly) NSString *netWeightG __attribute__((swift_name("netWeightG")));
@property (readonly) NSString * _Nullable phosphorusMg __attribute__((swift_name("phosphorusMg")));
@property (readonly) NSString * _Nullable potassiumMg __attribute__((swift_name("potassiumMg")));
@property (readonly) NSString * _Nullable proteinG __attribute__((swift_name("proteinG")));
@property (readonly) NSString *roundedGrossWeightG __attribute__((swift_name("roundedGrossWeightG")));
@property (readonly) NSString * _Nullable seleniumMg __attribute__((swift_name("seleniumMg")));
@property (readonly) NSString * _Nullable sodiumMg __attribute__((swift_name("sodiumMg")));
@property (readonly) NSString * _Nullable sugarPerEquivalentG __attribute__((swift_name("sugarPerEquivalentG")));
@property (readonly) NSString *suggestedQuantity __attribute__((swift_name("suggestedQuantity")));
@property (readonly) NSString * _Nullable vitaminAUgRe __attribute__((swift_name("vitaminAUgRe")));
@end

@interface ComposeAppFood (Extensions)

/**
 * Obtiene el valor formateado de agMonounsaturatedG con su unidad.
 */
- (NSString *)getAgMonounsaturatedFormatted __attribute__((swift_name("getAgMonounsaturatedFormatted()")));

/**
 * Obtiene el valor formateado de agPolyunsaturatedG con su unidad.
 */
- (NSString *)getAgPolyunsaturatedFormatted __attribute__((swift_name("getAgPolyunsaturatedFormatted()")));

/**
 * Obtiene el valor formateado de agSaturatedG con su unidad.
 */
- (NSString *)getAgSaturatedFormatted __attribute__((swift_name("getAgSaturatedFormatted()")));

/**
 * Obtiene el valor formateado de ascorbicAcidMg con su unidad.
 */
- (NSString *)getAscorbicAcidFormatted __attribute__((swift_name("getAscorbicAcidFormatted()")));

/**
 * Obtiene el valor formateado de calciumMg con su unidad.
 */
- (NSString *)getCalciumFormatted __attribute__((swift_name("getCalciumFormatted()")));

/**
 * Obtiene el valor formateado de carbohydratesG con su unidad.
 */
- (NSString *)getCarbohydratesFormatted __attribute__((swift_name("getCarbohydratesFormatted()")));

/**
 * Obtiene el valor formateado de cholesterolMg con su unidad.
 */
- (NSString *)getCholesterolFormatted __attribute__((swift_name("getCholesterolFormatted()")));

/**
 * Obtiene el valor formateado de energyKcal con su unidad.
 */
- (NSString *)getEnergyFormatted __attribute__((swift_name("getEnergyFormatted()")));

/**
 * Obtiene el valor formateado de fiverG con su unidad.
 */
- (NSString *)getFiberFormatted __attribute__((swift_name("getFiberFormatted()")));

/**
 * Obtiene el valor formateado de folicAcidUg con su unidad.
 */
- (NSString *)getFolicAcidFormatted __attribute__((swift_name("getFolicAcidFormatted()")));

/**
 * Obtiene el valor formateado de hypoglycemicIndex con su unidad.
 */
- (NSString *)getHypoglycemicIndexFormatted __attribute__((swift_name("getHypoglycemicIndexFormatted()")));

/**
 * Obtiene el valor formateado de hypoglycemicLoad con su unidad.
 */
- (NSString *)getHypoglycemicLoadFormatted __attribute__((swift_name("getHypoglycemicLoadFormatted()")));

/**
 * Obtiene el valor formateado de ironMg con su unidad.
 */
- (NSString *)getIronFormatted __attribute__((swift_name("getIronFormatted()")));

/**
 * Obtiene el valor formateado de ironNoHemMg con su unidad.
 */
- (NSString *)getIronNoHemFormatted __attribute__((swift_name("getIronNoHemFormatted()")));

/**
 * Obtiene el valor formateado de lipidsG con su unidad.
 */
- (NSString *)getLipidsFormatted __attribute__((swift_name("getLipidsFormatted()")));

/**
 * Obtiene el valor formateado de netWeightG con su unidad.
 */
- (NSString *)getNetWeightFormatted __attribute__((swift_name("getNetWeightFormatted()")));

/**
 * Obtiene el valor formateado de phosphorusMg con su unidad.
 */
- (NSString *)getPhosphorusFormatted __attribute__((swift_name("getPhosphorusFormatted()")));

/**
 * Obtiene el valor formateado de potassiumMg con su unidad.
 */
- (NSString *)getPotassiumFormatted __attribute__((swift_name("getPotassiumFormatted()")));

/**
 * Obtiene el valor formateado de proteinG con su unidad.
 */
- (NSString *)getProteinFormatted __attribute__((swift_name("getProteinFormatted()")));

/**
 * Obtiene el valor formateado de roundedGrossWeightG con su unidad.
 */
- (NSString *)getRoundedGrossWeightFormatted __attribute__((swift_name("getRoundedGrossWeightFormatted()")));

/**
 * Obtiene el valor formateado de seleniumMg con su unidad.
 */
- (NSString *)getSeleniumFormatted __attribute__((swift_name("getSeleniumFormatted()")));

/**
 * Obtiene el valor formateado de sodiumMg con su unidad.
 */
- (NSString *)getSodiumFormatted __attribute__((swift_name("getSodiumFormatted()")));

/**
 * Obtiene el valor formateado de sugarPerEquivalentG con su unidad.
 */
- (NSString *)getSugarPerEquivalentFormatted __attribute__((swift_name("getSugarPerEquivalentFormatted()")));

/**
 * Obtiene el valor formateado de vitaminAUgRe con su unidad.
 */
- (NSString *)getVitaminAFormatted __attribute__((swift_name("getVitaminAFormatted()")));
@end

@interface ComposeAppModelSubItemCard (Extensions)

/**
 * Función de extensión que convierte ModelSubItemCard en una lista de strings formateados.
 * Filtra los valores nulos o "N/A" y formatea cada campo como "Etiqueta: valor".
 *
 * @return Lista de strings con los campos no nulos formateados
 *
 * @author pelkidev
 */
- (NSArray<NSString *> *)toNonNullList __attribute__((swift_name("toNonNullList()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppInitializerKt")))
@interface ComposeAppAppInitializerKt : ComposeAppBase
+ (id<ComposeAppKotlinx_coroutines_coreCoroutineScope>)createApplicationScope __attribute__((swift_name("createApplicationScope()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorKt")))
@interface ComposeAppColorKt : ComposeAppBase
@property (class, readonly) uint64_t aceiteYGrasaProteina __attribute__((swift_name("aceiteYGrasaProteina")));
@property (class, readonly) uint64_t aceiteYGrasas __attribute__((swift_name("aceiteYGrasas")));
@property (class, readonly) uint64_t altoGrasa __attribute__((swift_name("altoGrasa")));
@property (class, readonly) uint64_t azucar __attribute__((swift_name("azucar")));
@property (class, readonly) uint64_t azucarGrasa __attribute__((swift_name("azucarGrasa")));
@property (class, readonly) uint64_t backgroundDark __attribute__((swift_name("backgroundDark")));
@property (class, readonly) uint64_t backgroundLight __attribute__((swift_name("backgroundLight")));
@property (class, readonly) uint64_t bajoGrasa __attribute__((swift_name("bajoGrasa")));
@property (class, readonly) uint64_t cereales __attribute__((swift_name("cereales")));
@property (class, readonly) uint64_t cerealesGrasa __attribute__((swift_name("cerealesGrasa")));
@property (class, readonly) uint64_t colorBgCard __attribute__((swift_name("colorBgCard")));
@property (class, readonly) uint64_t colorDisable __attribute__((swift_name("colorDisable")));
@property (class, readonly) uint64_t colorErrorToast __attribute__((swift_name("colorErrorToast")));
@property (class, readonly) uint64_t colorInformativeToast __attribute__((swift_name("colorInformativeToast")));
@property (class, readonly) uint64_t colorSuccessToast __attribute__((swift_name("colorSuccessToast")));
@property (class, readonly) uint64_t colorTransparent __attribute__((swift_name("colorTransparent")));
@property (class, readonly) uint64_t colorWarningToast __attribute__((swift_name("colorWarningToast")));
@property (class, readonly) uint64_t colorWhite __attribute__((swift_name("colorWhite")));
@property (class, readonly) uint64_t errorContainerDark __attribute__((swift_name("errorContainerDark")));
@property (class, readonly) uint64_t errorContainerLight __attribute__((swift_name("errorContainerLight")));
@property (class, readonly) uint64_t errorDark __attribute__((swift_name("errorDark")));
@property (class, readonly) uint64_t errorLight __attribute__((swift_name("errorLight")));
@property (class, readonly) uint64_t frutas __attribute__((swift_name("frutas")));
@property (class, readonly) uint64_t lecheAzucar __attribute__((swift_name("lecheAzucar")));
@property (class, readonly) uint64_t lecheDescremada __attribute__((swift_name("lecheDescremada")));
@property (class, readonly) uint64_t lecheEntera __attribute__((swift_name("lecheEntera")));
@property (class, readonly) uint64_t lecheSemidescremada __attribute__((swift_name("lecheSemidescremada")));
@property (class, readonly) uint64_t leguminosas __attribute__((swift_name("leguminosas")));
@property (class, readonly) uint64_t moderadoGrasa __attribute__((swift_name("moderadoGrasa")));
@property (class, readonly) uint64_t muyBajoGrasa __attribute__((swift_name("muyBajoGrasa")));
@property (class, readonly) uint64_t onBackgroundDark __attribute__((swift_name("onBackgroundDark")));
@property (class, readonly) uint64_t onBackgroundLight __attribute__((swift_name("onBackgroundLight")));
@property (class, readonly) uint64_t onErrorContainerDark __attribute__((swift_name("onErrorContainerDark")));
@property (class, readonly) uint64_t onErrorContainerLight __attribute__((swift_name("onErrorContainerLight")));
@property (class, readonly) uint64_t onErrorDark __attribute__((swift_name("onErrorDark")));
@property (class, readonly) uint64_t onErrorLight __attribute__((swift_name("onErrorLight")));
@property (class, readonly) uint64_t onPrimaryContainerDark __attribute__((swift_name("onPrimaryContainerDark")));
@property (class, readonly) uint64_t onPrimaryContainerLight __attribute__((swift_name("onPrimaryContainerLight")));
@property (class, readonly) uint64_t onPrimaryDark __attribute__((swift_name("onPrimaryDark")));
@property (class, readonly) uint64_t onPrimaryLight __attribute__((swift_name("onPrimaryLight")));
@property (class, readonly) uint64_t onSecondaryContainerDark __attribute__((swift_name("onSecondaryContainerDark")));
@property (class, readonly) uint64_t onSecondaryContainerLight __attribute__((swift_name("onSecondaryContainerLight")));
@property (class, readonly) uint64_t onSecondaryDark __attribute__((swift_name("onSecondaryDark")));
@property (class, readonly) uint64_t onSecondaryLight __attribute__((swift_name("onSecondaryLight")));
@property (class, readonly) uint64_t onSurfaceDark __attribute__((swift_name("onSurfaceDark")));
@property (class, readonly) uint64_t onSurfaceLight __attribute__((swift_name("onSurfaceLight")));
@property (class, readonly) uint64_t onSurfaceVariantDark __attribute__((swift_name("onSurfaceVariantDark")));
@property (class, readonly) uint64_t onSurfaceVariantLight __attribute__((swift_name("onSurfaceVariantLight")));
@property (class, readonly) uint64_t onTertiaryContainerDark __attribute__((swift_name("onTertiaryContainerDark")));
@property (class, readonly) uint64_t onTertiaryContainerLight __attribute__((swift_name("onTertiaryContainerLight")));
@property (class, readonly) uint64_t onTertiaryDark __attribute__((swift_name("onTertiaryDark")));
@property (class, readonly) uint64_t onTertiaryLight __attribute__((swift_name("onTertiaryLight")));
@property (class, readonly) uint64_t outlineDark __attribute__((swift_name("outlineDark")));
@property (class, readonly) uint64_t outlineLight __attribute__((swift_name("outlineLight")));
@property (class, readonly) uint64_t outlineVariantDark __attribute__((swift_name("outlineVariantDark")));
@property (class, readonly) uint64_t outlineVariantLight __attribute__((swift_name("outlineVariantLight")));
@property (class, readonly) uint64_t primaryContainerDark __attribute__((swift_name("primaryContainerDark")));
@property (class, readonly) uint64_t primaryContainerLight __attribute__((swift_name("primaryContainerLight")));
@property (class, readonly) uint64_t primaryDark __attribute__((swift_name("primaryDark")));
@property (class, readonly) uint64_t primaryLight __attribute__((swift_name("primaryLight")));
@property (class, readonly) uint64_t scrimDark __attribute__((swift_name("scrimDark")));
@property (class, readonly) uint64_t scrimLight __attribute__((swift_name("scrimLight")));
@property (class, readonly) uint64_t secondaryContainerDark __attribute__((swift_name("secondaryContainerDark")));
@property (class, readonly) uint64_t secondaryContainerLight __attribute__((swift_name("secondaryContainerLight")));
@property (class, readonly) uint64_t secondaryDark __attribute__((swift_name("secondaryDark")));
@property (class, readonly) uint64_t secondaryLight __attribute__((swift_name("secondaryLight")));
@property (class, readonly) uint64_t surfaceBrightDark __attribute__((swift_name("surfaceBrightDark")));
@property (class, readonly) uint64_t surfaceBrightLight __attribute__((swift_name("surfaceBrightLight")));
@property (class, readonly) uint64_t surfaceContainerDark __attribute__((swift_name("surfaceContainerDark")));
@property (class, readonly) uint64_t surfaceContainerHighDark __attribute__((swift_name("surfaceContainerHighDark")));
@property (class, readonly) uint64_t surfaceContainerHighLight __attribute__((swift_name("surfaceContainerHighLight")));
@property (class, readonly) uint64_t surfaceContainerHighestDark __attribute__((swift_name("surfaceContainerHighestDark")));
@property (class, readonly) uint64_t surfaceContainerHighestLight __attribute__((swift_name("surfaceContainerHighestLight")));
@property (class, readonly) uint64_t surfaceContainerLight __attribute__((swift_name("surfaceContainerLight")));
@property (class, readonly) uint64_t surfaceContainerLowDark __attribute__((swift_name("surfaceContainerLowDark")));
@property (class, readonly) uint64_t surfaceContainerLowLight __attribute__((swift_name("surfaceContainerLowLight")));
@property (class, readonly) uint64_t surfaceContainerLowestDark __attribute__((swift_name("surfaceContainerLowestDark")));
@property (class, readonly) uint64_t surfaceContainerLowestLight __attribute__((swift_name("surfaceContainerLowestLight")));
@property (class, readonly) uint64_t surfaceDark __attribute__((swift_name("surfaceDark")));
@property (class, readonly) uint64_t surfaceDimDark __attribute__((swift_name("surfaceDimDark")));
@property (class, readonly) uint64_t surfaceDimLight __attribute__((swift_name("surfaceDimLight")));
@property (class, readonly) uint64_t surfaceLight __attribute__((swift_name("surfaceLight")));
@property (class, readonly) uint64_t surfaceVariantDark __attribute__((swift_name("surfaceVariantDark")));
@property (class, readonly) uint64_t surfaceVariantLight __attribute__((swift_name("surfaceVariantLight")));
@property (class, readonly) uint64_t tertiaryContainerDark __attribute__((swift_name("tertiaryContainerDark")));
@property (class, readonly) uint64_t tertiaryContainerLight __attribute__((swift_name("tertiaryContainerLight")));
@property (class, readonly) uint64_t tertiaryDark __attribute__((swift_name("tertiaryDark")));
@property (class, readonly) uint64_t tertiaryLight __attribute__((swift_name("tertiaryLight")));
@property (class, readonly) uint64_t verduras __attribute__((swift_name("verduras")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseModule_iosKt")))
@interface ComposeAppDatabaseModule_iosKt : ComposeAppBase
@property (class, readonly) ComposeAppKoin_coreModule *platformDatabaseModule __attribute__((swift_name("platformDatabaseModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseModuleKt")))
@interface ComposeAppDatabaseModuleKt : ComposeAppBase
@property (class, readonly) ComposeAppKoin_coreModule *databaseModule __attribute__((swift_name("databaseModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DimenKt")))
@interface ComposeAppDimenKt : ComposeAppBase
@property (class, readonly) float activityHorizontalMargin __attribute__((swift_name("activityHorizontalMargin")));
@property (class, readonly) float activityVerticalMargin __attribute__((swift_name("activityVerticalMargin")));
@property (class, readonly) float dimenRecommendedGoogle __attribute__((swift_name("dimenRecommendedGoogle")));
@property (class, readonly) float elevationGeneric __attribute__((swift_name("elevationGeneric")));
@property (class, readonly) float margin16dp __attribute__((swift_name("margin16dp")));
@property (class, readonly) float margin4dp __attribute__((swift_name("margin4dp")));
@property (class, readonly) float margin8dp __attribute__((swift_name("margin8dp")));
@property (class, readonly) float marginIcon __attribute__((swift_name("marginIcon")));
@property (class, readonly) float padding16dp __attribute__((swift_name("padding16dp")));
@property (class, readonly) float padding8dp __attribute__((swift_name("padding8dp")));
@property (class, readonly) float radiusGeneric __attribute__((swift_name("radiusGeneric")));
@property (class, readonly) float sizeIcon __attribute__((swift_name("sizeIcon")));
@property (class, readonly) int64_t sizeTextAlert __attribute__((swift_name("sizeTextAlert")));
@property (class, readonly) int64_t sizeTextButton __attribute__((swift_name("sizeTextButton")));
@property (class, readonly) int64_t sizeTextCard __attribute__((swift_name("sizeTextCard")));
@property (class, readonly) int64_t sizeTitleAlert __attribute__((swift_name("sizeTitleAlert")));
@property (class, readonly) int64_t sizeTitleCard __attribute__((swift_name("sizeTitleCard")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainViewControllerKt")))
@interface ComposeAppMainViewControllerKt : ComposeAppBase
+ (UIViewController *)MainViewController __attribute__((swift_name("MainViewController()")));
+ (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapperMenuKt")))
@interface ComposeAppMapperMenuKt : ComposeAppBase
+ (NSArray<ComposeAppModelItemCard *> *)toMenuMapper:(NSArray<NSString *> *)receiver __attribute__((swift_name("toMenuMapper(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapperSubMenuKt")))
@interface ComposeAppMapperSubMenuKt : ComposeAppBase
+ (NSArray<ComposeAppModelSubItemCard *> *)toSubMenuMapper:(NSArray<ComposeAppFood *> *)receiver __attribute__((swift_name("toSubMenuMapper(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface ComposeAppPlatform_iosKt : ComposeAppBase
+ (id<ComposeAppPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringKt")))
@interface ComposeAppStringKt : ComposeAppBase
@property (class, readonly) NSString *allCategories __attribute__((swift_name("allCategories")));
@property (class, readonly) NSString *contentImage __attribute__((swift_name("contentImage")));
@property (class, readonly) NSString *titleMenu __attribute__((swift_name("titleMenu")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseCaseModuleKt")))
@interface ComposeAppUseCaseModuleKt : ComposeAppBase
@property (class, readonly) ComposeAppKoin_coreModule *useCaseModule __attribute__((swift_name("useCaseModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeModuleKt")))
@interface ComposeAppHomeModuleKt : ComposeAppBase
@property (class, readonly) ComposeAppKoin_coreModule *homeModule __attribute__((swift_name("homeModule")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface ComposeAppKotlinThrowable : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (ComposeAppKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface ComposeAppKotlinException : ComposeAppKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface ComposeAppKotlinRuntimeException : ComposeAppKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface ComposeAppKotlinIllegalStateException : ComposeAppKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface ComposeAppKotlinCancellationException : ComposeAppKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface ComposeAppKotlinEnumCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ComposeAppKotlinArray<T> : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ComposeAppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol ComposeAppRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol ComposeAppRuntimeTransactionWithoutReturn <ComposeAppRuntimeTransactionCallbacks>
@required

/**
 * Rolls back this transaction.
 */
- (void)rollback __attribute__((swift_name("rollback()")));

/**
 * Begin an inner transaction.
 */
- (void)transactionBody:(void (^)(id<ComposeAppRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol ComposeAppRuntimeTransactionWithReturn <ComposeAppRuntimeTransactionCallbacks>
@required

/**
 * Rolls back this transaction.
 */
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));

/**
 * Begin an inner transaction.
 */
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<ComposeAppRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol ComposeAppRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end


/**
 * Maintains connections to an underlying SQL database and provides APIs for managing transactions
 * and executing SQL statements.
 */
__attribute__((swift_name("RuntimeSqlDriver")))
@protocol ComposeAppRuntimeSqlDriver <ComposeAppRuntimeCloseable>
@required
- (void)addListenerQueryKeys:(ComposeAppKotlinArray<NSString *> *)queryKeys listener:(id<ComposeAppRuntimeQueryListener>)listener __attribute__((swift_name("addListener(queryKeys:listener:)")));

/**
 * The currently open [Transacter.Transaction] on the database.
 *
 * It's up to the implementor how this method behaves for different connection/threading patterns.
 */
- (ComposeAppRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));

/**
 * Execute a SQL statement.
 *
 * @param [identifier] An opaque, unique value that can be used to implement any driver-side
 *   caching of prepared statements. If [identifier] is null, a fresh statement is required.
 * @param [sql] The SQL string to be executed.
 * @param [parameters] The number of bindable parameters [sql] contains.
 * @param [binders] A lambda which is called before execution to bind any parameters to the SQL
 *   statement.
 *
 * @return The number of rows updated for an INSERT/DELETE/UPDATE, or 0 for other SQL statements.
 *
 * NOTE it is up to the specific driver to correctly return the row changes. Notably the SQLJS
 * driver does not do this and you should query changes() manually.
 */
- (id<ComposeAppRuntimeQueryResult>)executeIdentifier:(ComposeAppInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ComposeAppRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));

/**
 * Execute a SQL statement and evaluate its result set using the given block.
 *
 * @param [identifier] An opaque, unique value that can be used to implement any driver-side
 *   caching of prepared statements. If [identifier] is null, a fresh statement is required.
 * @param [sql] The SQL string to be executed.
 * @param [mapper] A lambda which is called with the cursor when the statement is executed
 *   successfully. The generic result of the lambda is returned to the caller, as soon as the
 *   mutual exclusion on the database connection ends. The cursor **must not escape** the block
 *   scope.
 * @param [parameters] The number of bindable parameters [sql] contains.
 * @param [binders] A lambda which is called before execution to bind any parameters to the SQL
 *   statement.
 */
- (id<ComposeAppRuntimeQueryResult>)executeQueryIdentifier:(ComposeAppInt * _Nullable)identifier sql:(NSString *)sql mapper:(id<ComposeAppRuntimeQueryResult> (^)(id<ComposeAppRuntimeSqlCursor>))mapper parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ComposeAppRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:mapper:parameters:binders:)")));

/**
 * Start a new [Transacter.Transaction] on the database.
 *
 * It's up to the implementor how this method behaves for different connection/threading patterns.
 */
- (id<ComposeAppRuntimeQueryResult>)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
- (void)notifyListenersQueryKeys:(ComposeAppKotlinArray<NSString *> *)queryKeys __attribute__((swift_name("notifyListeners(queryKeys:)")));
- (void)removeListenerQueryKeys:(ComposeAppKotlinArray<NSString *> *)queryKeys listener:(id<ComposeAppRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(queryKeys:listener:)")));
@end


/**
 * API for creating and migrating a SQL database. The implementation of this interface is generated
 * by SQLDelight.
 *
 * @param T Says whether the generated code for this database is asynchronous or synchronous. Most
 *          implementations of [app.cash.sqldelight.SqlDriver] will require one or the other, which
 *          is enforced by requesting the correlated type of Schema ([QueryResult.Value] for
 *          a synchronous runtime, [QueryResult.AsyncValue] for asynchronous). In a multiplatform
 *          environment where you have some drivers that use an asynchronous runtime, and some that
 *          require synchronous, you can generate an asynchronous runtime and then pass a
 *          synchronous schema to synchronous drivers with [SqlSchema.synchronous()]
 */
__attribute__((swift_name("RuntimeSqlSchema")))
@protocol ComposeAppRuntimeSqlSchema
@required

/**
 * Use [driver] to create the schema from scratch. Assumes no existing database state.
 */
- (id<ComposeAppRuntimeQueryResult>)createDriver:(id<ComposeAppRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));

/**
 * Use [driver] to migrate from schema [oldVersion] to [newVersion].
 * Each of the [callbacks] are executed during the migration whenever the upgrade to the version specified by
 * [AfterVersion.afterVersion] has been completed.
 */
- (id<ComposeAppRuntimeQueryResult>)migrateDriver:(id<ComposeAppRuntimeSqlDriver>)driver oldVersion:(int64_t)oldVersion newVersion:(int64_t)newVersion callbacks:(ComposeAppKotlinArray<ComposeAppRuntimeAfterVersion *> *)callbacks __attribute__((swift_name("migrate(driver:oldVersion:newVersion:callbacks:)")));

/**
 * The version of this schema.
 */
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface ComposeAppKotlinUnit : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * A SQL transaction. Can be created through the driver via [SqlDriver.newTransaction] or
 * through an implementation of [Transacter] by calling [Transacter.transaction].
 *
 * A transaction is expected never to escape the thread it is created on, or more specifically,
 * never to escape the lambda scope of [Transacter.transaction] and [Transacter.transactionWithResult].
 */
__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface ComposeAppRuntimeTransacterTransaction : ComposeAppBase <ComposeAppRuntimeTransactionCallbacks>

/**
 * A SQL transaction. Can be created through the driver via [SqlDriver.newTransaction] or
 * through an implementation of [Transacter] by calling [Transacter.transaction].
 *
 * A transaction is expected never to escape the thread it is created on, or more specifically,
 * never to escape the lambda scope of [Transacter.transaction] and [Transacter.transactionWithResult].
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A SQL transaction. Can be created through the driver via [SqlDriver.newTransaction] or
 * through an implementation of [Transacter] by calling [Transacter.transaction].
 *
 * A transaction is expected never to escape the thread it is created on, or more specifically,
 * never to escape the lambda scope of [Transacter.transaction] and [Transacter.transactionWithResult].
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Queues [function] to be run after this transaction successfully commits.
 */
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));

/**
 * Queues [function] to be run after this transaction rolls back.
 */
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * Signal to the underlying SQL driver that this transaction should be finished.
 *
 * @param successful Whether the transaction completed successfully or not.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<ComposeAppRuntimeQueryResult>)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * The parent transaction, if there is any.
 *
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) ComposeAppRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("RuntimeExecutableQuery")))
@interface ComposeAppRuntimeExecutableQuery<__covariant RowType> : ComposeAppBase
- (instancetype)initWithMapper:(RowType (^)(id<ComposeAppRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));

/**
 * Execute the underlying statement. The resulting cursor is passed to the given block.
 *
 * The cursor is closed automatically after the block returns.
 */
- (id<ComposeAppRuntimeQueryResult>)executeMapper:(id<ComposeAppRuntimeQueryResult> (^)(id<ComposeAppRuntimeSqlCursor>))mapper __attribute__((swift_name("execute(mapper:)")));

/**
 * @return The result set of the underlying SQL statement as a list of [RowType].
 */
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));

/**
 * @return The only row of the result set for the underlying SQL statement as a non null
 *   [RowType].
 *
 * @throws NullPointerException if when executed this query has no rows in its result set.
 * @throws IllegalStateException if when executed this query has multiple rows in its result set.
 */
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));

/**
 * @return The first row of the result set for the underlying SQL statement as a non null
 *   [RowType] or null if the result set has no rows.
 *
 * @throws IllegalStateException if when executed this query has multiple rows in its result set.
 */
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
@property (readonly) RowType (^mapper)(id<ComposeAppRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end


/**
 * A listenable, typed query generated by SQLDelight.
 *
 * @param RowType the type that this query can map its result set to.
 *
 * @property mapper The mapper this [Query] was created with, which can convert a row in the SQL
 *   cursor returned by [execute] to [RowType].
 */
__attribute__((swift_name("RuntimeQuery")))
@interface ComposeAppRuntimeQuery<__covariant RowType> : ComposeAppRuntimeExecutableQuery<RowType>
- (instancetype)initWithMapper:(RowType (^)(id<ComposeAppRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));

/**
 * Register a listener to be notified of future changes in the result set.
 */
- (void)addListenerListener:(id<ComposeAppRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));

/**
 * Remove a listener to no longer be notified of future changes in the result set.
 */
- (void)removeListenerListener:(id<ComposeAppRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end


/**
 * The returned [value] is the result of a database query or other database operation.
 *
 * This interface enables drivers to be based on non-blocking APIs where the result can be obtained using the suspending
 * [await] method. See [AsyncValue].
 */
__attribute__((swift_name("RuntimeQueryResult")))
@protocol ComposeAppRuntimeQueryResult
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol ComposeAppKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<ComposeAppKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<ComposeAppKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<ComposeAppKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol ComposeAppKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<ComposeAppKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<ComposeAppKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) ComposeAppKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol ComposeAppKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<ComposeAppKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<ComposeAppKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (ComposeAppKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol ComposeAppKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ComposeAppKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol ComposeAppKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol ComposeAppKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<ComposeAppKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Kermit_coreBaseLogger")))
@interface ComposeAppKermit_coreBaseLogger : ComposeAppBase
- (instancetype)initWithConfig:(id<ComposeAppKermit_coreLoggerConfig>)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
- (void)logSeverity:(ComposeAppKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("log(severity:tag:throwable:message:)")));
- (void)logBlockSeverity:(ComposeAppKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("logBlock(severity:tag:throwable:message:)")));
- (void)processLogSeverity:(ComposeAppKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("processLog(severity:tag:throwable:message:)")));
@property (readonly) id<ComposeAppKermit_coreLoggerConfig> config __attribute__((swift_name("config")));
@property (readonly) id<ComposeAppKermit_coreMutableLoggerConfig> mutableConfig __attribute__((swift_name("mutableConfig")));
@end

__attribute__((swift_name("KermitLogger")))
@interface ComposeAppKermitLogger : ComposeAppKermit_coreBaseLogger
- (instancetype)initWithConfig:(id<ComposeAppKermit_coreLoggerConfig>)config tag:(NSString *)tag __attribute__((swift_name("init(config:tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithConfig:(id<ComposeAppKermit_coreLoggerConfig>)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKermitLoggerCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aWithTag:(NSString *)withTag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("a(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aMessageString:(NSString *)messageString throwable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("a(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aThrowable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("a(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dWithTag:(NSString *)withTag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("d(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dMessageString:(NSString *)messageString throwable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("d(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dThrowable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("d(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eWithTag:(NSString *)withTag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("e(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eMessageString:(NSString *)messageString throwable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("e(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eThrowable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("e(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iWithTag:(NSString *)withTag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("i(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iMessageString:(NSString *)messageString throwable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("i(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iThrowable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("i(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vWithTag:(NSString *)withTag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("v(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vMessageString:(NSString *)messageString throwable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("v(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vThrowable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("v(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wWithTag:(NSString *)withTag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("w(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wMessageString:(NSString *)messageString throwable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("w(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wThrowable:(ComposeAppKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("w(throwable:tag:message:)")));
- (ComposeAppKermitLogger *)withTagTag:(NSString *)tag __attribute__((swift_name("withTag(tag:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol ComposeAppKotlinx_coroutines_coreSharedFlow <ComposeAppKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol ComposeAppKotlinx_coroutines_coreStateFlow <ComposeAppKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol ComposeAppKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<ComposeAppKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<ComposeAppKotlinCoroutineContextElement> _Nullable)getKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<ComposeAppKotlinCoroutineContext>)minusKeyKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<ComposeAppKotlinCoroutineContext>)plusContext:(id<ComposeAppKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol ComposeAppKotlinCoroutineContextElement <ComposeAppKotlinCoroutineContext>
@required
@property (readonly) id<ComposeAppKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface ComposeAppKotlinAbstractCoroutineContextElement : ComposeAppBase <ComposeAppKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<ComposeAppKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol ComposeAppKotlinContinuationInterceptor <ComposeAppKotlinCoroutineContextElement>
@required
- (id<ComposeAppKotlinContinuation>)interceptContinuationContinuation:(id<ComposeAppKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<ComposeAppKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface ComposeAppKotlinx_coroutines_coreCoroutineDispatcher : ComposeAppKotlinAbstractCoroutineContextElement <ComposeAppKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<ComposeAppKotlinCoroutineContext>)context block:(id<ComposeAppKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<ComposeAppKotlinCoroutineContext>)context block:(id<ComposeAppKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<ComposeAppKotlinContinuation>)interceptContinuationContinuation:(id<ComposeAppKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<ComposeAppKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<ComposeAppKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface ComposeAppKotlinRegex : ComposeAppBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<ComposeAppKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(ComposeAppKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<ComposeAppKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<ComposeAppKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (id<ComposeAppKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<ComposeAppKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<ComposeAppKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
- (id<ComposeAppKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<ComposeAppKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface ComposeAppKoin_coreModule : ComposeAppBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (ComposeAppKoin_coreKoinDefinition<id> *)factoryQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(ComposeAppKotlinArray<ComposeAppKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(ComposeAppKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(ComposeAppKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<ComposeAppKoin_coreModule *> *)plusModules:(NSArray<ComposeAppKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<ComposeAppKoin_coreModule *> *)plusModule:(ComposeAppKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(ComposeAppKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(ComposeAppKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<ComposeAppKoin_coreQualifier>)qualifier scopeSet:(void (^)(ComposeAppKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (ComposeAppKoin_coreKoinDefinition<id> *)singleQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) ComposeAppMutableSet<ComposeAppKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<ComposeAppKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) ComposeAppMutableDictionary<NSString *, ComposeAppKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@property (readonly) ComposeAppMutableSet<id<ComposeAppKoin_coreQualifier>> *scopes __attribute__((swift_name("scopes")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol ComposeAppKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * An interface for listening to changes in the result set of a query.
 */
__attribute__((swift_name("RuntimeQueryListener")))
@protocol ComposeAppRuntimeQueryListener
@required

/**
 * Called whenever the query this listener was attached to is dirtied.
 *
 * Calls are made synchronously on the thread where the updated occurred, after the update applied successfully.
 */
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end


/**
 * Represents a SQL statement that has been prepared by a driver to be executed.
 *
 * This type is not thread safe unless otherwise specified by the driver emitting these.
 *
 * Prepared statements should not be cached by client code. Drivers can implement caching by using
 * the integer identifier passed to [SqlDriver.execute] or [SqlDriver.executeQuery].
 * Client code can pass the same identifier to that method to request that the prepared statement
 * is cached.
 */
__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol ComposeAppRuntimeSqlPreparedStatement
@required

/**
 * Bind [boolean] to the underlying statement at [index].
 */
- (void)bindBooleanIndex:(int32_t)index boolean:(ComposeAppBoolean * _Nullable)boolean __attribute__((swift_name("bindBoolean(index:boolean:)")));

/**
 * Bind [bytes] to the underlying statement at [index].
 */
- (void)bindBytesIndex:(int32_t)index bytes:(ComposeAppKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));

/**
 * Bind [double] to the underlying statement at [index].
 */
- (void)bindDoubleIndex:(int32_t)index double:(ComposeAppDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));

/**
 * Bind [long] to the underlying statement at [index].
 */
- (void)bindLongIndex:(int32_t)index long:(ComposeAppLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));

/**
 * Bind [string] to the underlying statement at [index].
 */
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end


/**
 * Represents a SQL result set which can be iterated through with [next]. Initially the cursor will
 * not point to any row, and calling [next] once will iterate to the first row.
 */
__attribute__((swift_name("RuntimeSqlCursor")))
@protocol ComposeAppRuntimeSqlCursor
@required

/**
 * @return The boolean or null value of column [index] for the current row of the result set.
 */
- (ComposeAppBoolean * _Nullable)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));

/**
 * @return The bytes or null value of column [index] for the current row of the result set.
 */
- (ComposeAppKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));

/**
 * @return The double or null value of column [index] for the current row of the result set.
 */
- (ComposeAppDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));

/**
 * @return The int or null value of column [index] for the current row of the result set.
 */
- (ComposeAppLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));

/**
 * @return The string or null value of column [index] for the current row of the result set.
 */
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));

/**
 * Move to the next row in the result set.
 *
 * @return true if the cursor successfully moved to a new row, false if there was no row to
 *   iterate to.
 */
- (id<ComposeAppRuntimeQueryResult>)next __attribute__((swift_name("next()")));
@end


/**
 * Represents a block of code [block] that should be executed during a migration after the migration
 * has finished migrating to [afterVersion].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersion")))
@interface ComposeAppRuntimeAfterVersion : ComposeAppBase
- (instancetype)initWithAfterVersion:(int64_t)afterVersion block:(void (^)(id<ComposeAppRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t afterVersion __attribute__((swift_name("afterVersion")));
@property (readonly) void (^block)(id<ComposeAppRuntimeSqlDriver>) __attribute__((swift_name("block")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol ComposeAppKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<ComposeAppKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface ComposeAppKotlinx_serialization_coreSerializersModule : ComposeAppBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<ComposeAppKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<ComposeAppKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<ComposeAppKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ComposeAppKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ComposeAppKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol ComposeAppKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface ComposeAppKotlinx_serialization_coreSerialKind : ComposeAppBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol ComposeAppKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<ComposeAppKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface ComposeAppKotlinNothing : ComposeAppBase
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol ComposeAppKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kermit_coreLoggerConfig")))
@protocol ComposeAppKermit_coreLoggerConfig
@required
@property (readonly) NSArray<ComposeAppKermit_coreLogWriter *> *logWriterList __attribute__((swift_name("logWriterList")));
@property (readonly) ComposeAppKermit_coreSeverity *minSeverity __attribute__((swift_name("minSeverity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kermit_coreSeverity")))
@interface ComposeAppKermit_coreSeverity : ComposeAppKotlinEnum<ComposeAppKermit_coreSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKermit_coreSeverity *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) ComposeAppKermit_coreSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) ComposeAppKermit_coreSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) ComposeAppKermit_coreSeverity *warn __attribute__((swift_name("warn")));
@property (class, readonly) ComposeAppKermit_coreSeverity *error __attribute__((swift_name("error")));
@property (class, readonly) ComposeAppKermit_coreSeverity *assert __attribute__((swift_name("assert")));
+ (ComposeAppKotlinArray<ComposeAppKermit_coreSeverity *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKermit_coreSeverity *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Kermit_coreMutableLoggerConfig")))
@protocol ComposeAppKermit_coreMutableLoggerConfig <ComposeAppKermit_coreLoggerConfig>
@required
- (void)setLogWriterList:(NSArray<ComposeAppKermit_coreLogWriter *> *)value __attribute__((swift_name("setLogWriterList(_:)")));
- (void)setMinSeverity:(ComposeAppKermit_coreSeverity *)value __attribute__((swift_name("setMinSeverity(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KermitLogger.Companion")))
@interface ComposeAppKermitLoggerCompanion : ComposeAppKermitLogger
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfig:(id<ComposeAppKermit_coreLoggerConfig>)config tag:(NSString *)tag __attribute__((swift_name("init(config:tag:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKermitLoggerCompanion *shared __attribute__((swift_name("shared")));
- (void)addLogWriterLogWriter:(ComposeAppKotlinArray<ComposeAppKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("addLogWriter(logWriter:)")));
- (void)setLogWritersLogWriter:(ComposeAppKotlinArray<ComposeAppKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("setLogWriters(logWriter:)")));
- (void)setLogWritersLogWriters:(NSArray<ComposeAppKermit_coreLogWriter *> *)logWriters __attribute__((swift_name("setLogWriters(logWriters:)")));
- (void)setMinSeveritySeverity:(ComposeAppKermit_coreSeverity *)severity __attribute__((swift_name("setMinSeverity(severity:)")));
- (void)setTagTag:(NSString *)tag __attribute__((swift_name("setTag(tag:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol ComposeAppKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol ComposeAppKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<ComposeAppKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface ComposeAppKotlinAbstractCoroutineContextKey<B, E> : ComposeAppBase <ComposeAppKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<ComposeAppKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<ComposeAppKotlinCoroutineContextElement> element))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface ComposeAppKotlinx_coroutines_coreCoroutineDispatcherKey : ComposeAppKotlinAbstractCoroutineContextKey<id<ComposeAppKotlinContinuationInterceptor>, ComposeAppKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<ComposeAppKotlinCoroutineContextKey>)baseKey safeCast:(id<ComposeAppKotlinCoroutineContextElement> _Nullable (^)(id<ComposeAppKotlinCoroutineContextElement> element))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol ComposeAppKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface ComposeAppKotlinRegexOption : ComposeAppKotlinEnum<ComposeAppKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) ComposeAppKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) ComposeAppKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) ComposeAppKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) ComposeAppKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) ComposeAppKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) ComposeAppKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (ComposeAppKotlinArray<ComposeAppKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKotlinRegexOption *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface ComposeAppKotlinRegexCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (ComposeAppKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end

__attribute__((swift_name("KotlinMatchResult")))
@protocol ComposeAppKotlinMatchResult
@required
- (id<ComposeAppKotlinMatchResult> _Nullable)next __attribute__((swift_name("next()")));
@property (readonly) ComposeAppKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<ComposeAppKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) ComposeAppKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol ComposeAppKotlinSequence
@required
- (id<ComposeAppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface ComposeAppKoin_coreKoinDefinition<R> : ComposeAppBase
- (instancetype)initWithModule:(ComposeAppKoin_coreModule *)module factory:(ComposeAppKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKoin_coreKoinDefinition<R> *)doCopyModule:(ComposeAppKoin_coreModule *)module factory:(ComposeAppKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) ComposeAppKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol ComposeAppKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface ComposeAppKoin_coreLockable : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface ComposeAppKoin_coreScope : ComposeAppKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<ComposeAppKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot scopeArchetype:(ComposeAppKoin_coreTypeQualifier * _Nullable)scopeArchetype _koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:scopeArchetype:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<ComposeAppKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride holdInstance:(BOOL)holdInstance __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:holdInstance:)")));
- (id)getQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<ComposeAppKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (ComposeAppKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (NSArray<NSString *> *)getLinkedScopeIds __attribute__((swift_name("getLinkedScopeIds()")));
- (id _Nullable)getOrNullQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (ComposeAppKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id _Nullable)getWithParametersClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("getWithParameters(clazz:qualifier:parameters:)")));
- (id<ComposeAppKotlinLazy>)injectQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier mode:(ComposeAppKotlinLazyThreadSafetyMode *)mode parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<ComposeAppKotlinLazy>)injectOrNullQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier mode:(ComposeAppKotlinLazyThreadSafetyMode *)mode parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(ComposeAppKotlinArray<ComposeAppKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<ComposeAppKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(ComposeAppKotlinArray<ComposeAppKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) ComposeAppKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) ComposeAppKoin_coreTypeQualifier * _Nullable scopeArchetype __attribute__((swift_name("scopeArchetype")));
@property (readonly) id<ComposeAppKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property id _Nullable sourceValue __attribute__((swift_name("sourceValue")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface ComposeAppKoin_coreParametersHolder : ComposeAppBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(ComposeAppBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<ComposeAppKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<ComposeAppKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (ComposeAppKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) ComposeAppBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface ComposeAppKoin_coreInstanceFactory<T> : ComposeAppKoin_coreLockable
- (instancetype)initWithBeanDefinition:(ComposeAppKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(ComposeAppKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(ComposeAppKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(ComposeAppKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(ComposeAppKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) ComposeAppKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface ComposeAppKoin_coreSingleInstanceFactory<T> : ComposeAppKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(ComposeAppKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(ComposeAppKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(ComposeAppKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(ComposeAppKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(ComposeAppKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface ComposeAppKoin_coreScopeDSL : ComposeAppBase
- (instancetype)initWithScopeQualifier:(id<ComposeAppKoin_coreQualifier>)scopeQualifier module:(ComposeAppKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKoin_coreKoinDefinition<id> *)factoryQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (ComposeAppKoin_coreKoinDefinition<id> *)scopedQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) ComposeAppKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<ComposeAppKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface ComposeAppKotlinByteArray : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ComposeAppByte *(^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ComposeAppKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol ComposeAppKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<ComposeAppKotlinKClass>)kClass provider:(id<ComposeAppKotlinx_serialization_coreKSerializer> (^)(NSArray<id<ComposeAppKotlinx_serialization_coreKSerializer>> *typeArgumentsSerializers))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<ComposeAppKotlinKClass>)kClass serializer:(id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<ComposeAppKotlinKClass>)baseClass actualClass:(id<ComposeAppKotlinKClass>)actualClass actualSerializer:(id<ComposeAppKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<ComposeAppKotlinKClass>)baseClass defaultDeserializerProvider:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<ComposeAppKotlinKClass>)baseClass defaultDeserializerProvider:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<ComposeAppKotlinKClass>)baseClass defaultSerializerProvider:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id value))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ComposeAppKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ComposeAppKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol ComposeAppKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol ComposeAppKotlinKClass <ComposeAppKotlinKDeclarationContainer, ComposeAppKotlinKAnnotatedElement, ComposeAppKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Kermit_coreLogWriter")))
@interface ComposeAppKermit_coreLogWriter : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isLoggableTag:(NSString *)tag severity:(ComposeAppKermit_coreSeverity *)severity __attribute__((swift_name("isLoggable(tag:severity:)")));
- (void)logSeverity:(ComposeAppKermit_coreSeverity *)severity message:(NSString *)message tag:(NSString *)tag throwable:(ComposeAppKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(severity:message:tag:throwable:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface ComposeAppKotlinMatchResultDestructured : ComposeAppBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<ComposeAppKotlinMatchResult> match __attribute__((swift_name("match")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol ComposeAppKotlinIterable
@required
- (id<ComposeAppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol ComposeAppKotlinCollection <ComposeAppKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly, getter=size_) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol ComposeAppKotlinMatchGroupCollection <ComposeAppKotlinCollection>
@required
- (ComposeAppKotlinMatchGroup * _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface ComposeAppKotlinIntProgression : ComposeAppBase <ComposeAppKotlinIterable>
@property (class, readonly, getter=companion) ComposeAppKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (ComposeAppKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol ComposeAppKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol ComposeAppKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface ComposeAppKotlinIntRange : ComposeAppKotlinIntProgression <ComposeAppKotlinClosedRange, ComposeAppKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(ComposeAppInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(ComposeAppInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) ComposeAppInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) ComposeAppInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) ComposeAppInt *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreTypeQualifier")))
@interface ComposeAppKoin_coreTypeQualifier : ComposeAppBase <ComposeAppKoin_coreQualifier>
- (instancetype)initWithType:(id<ComposeAppKotlinKClass>)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ComposeAppKotlinKClass> type __attribute__((swift_name("type")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface ComposeAppKoin_coreKoin : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (ComposeAppKoin_coreScope *)createScopeT:(id<ComposeAppKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (ComposeAppKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (ComposeAppKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source scopeArchetype:(ComposeAppKoin_coreTypeQualifier * _Nullable)scopeArchetype __attribute__((swift_name("createScope(scopeId:source:scopeArchetype:)")));
- (ComposeAppKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<ComposeAppKoin_coreQualifier>)qualifier source:(id _Nullable)source scopeArchetype:(ComposeAppKoin_coreTypeQualifier * _Nullable)scopeArchetype __attribute__((swift_name("createScope(scopeId:qualifier:source:scopeArchetype:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<ComposeAppKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (ComposeAppKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (ComposeAppKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<ComposeAppKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (ComposeAppKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (ComposeAppKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<ComposeAppKotlinLazy>)injectQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier mode:(ComposeAppKotlinLazyThreadSafetyMode *)mode parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<ComposeAppKotlinLazy>)injectOrNullQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier mode:(ComposeAppKotlinLazyThreadSafetyMode *)mode parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<ComposeAppKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(ComposeAppKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<ComposeAppKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) ComposeAppKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) ComposeAppKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) ComposeAppKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) ComposeAppKoin_coreOptionRegistry *optionRegistry __attribute__((swift_name("optionRegistry")));
@property (readonly) ComposeAppKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) ComposeAppKoin_coreCoreResolver *resolver __attribute__((swift_name("resolver")));
@property (readonly) ComposeAppKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol ComposeAppKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface ComposeAppKotlinLazyThreadSafetyMode : ComposeAppKotlinEnum<ComposeAppKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) ComposeAppKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) ComposeAppKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (ComposeAppKotlinArray<ComposeAppKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol ComposeAppKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(ComposeAppKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface ComposeAppKoin_coreLogger : ComposeAppBase
- (instancetype)initWithLevel:(ComposeAppKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(ComposeAppKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(ComposeAppKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(ComposeAppKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(ComposeAppKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property ComposeAppKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface ComposeAppKoin_coreBeanDefinition<T> : ComposeAppBase
- (instancetype)initWithScopeQualifier:(id<ComposeAppKoin_coreQualifier>)scopeQualifier primaryType:(id<ComposeAppKotlinKClass>)primaryType qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition kind:(ComposeAppKoin_coreKind *)kind secondaryTypes:(NSArray<id<ComposeAppKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<ComposeAppKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<ComposeAppKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property ComposeAppKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) ComposeAppKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<ComposeAppKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<ComposeAppKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<ComposeAppKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<ComposeAppKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface ComposeAppKoin_coreInstanceFactoryCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreResolutionContext")))
@interface ComposeAppKoin_coreResolutionContext : ComposeAppBase
- (instancetype)initWithLogger:(ComposeAppKoin_coreLogger *)logger scope:(ComposeAppKoin_coreScope *)scope clazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:clazz:qualifier:parameters:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKoin_coreResolutionContext *)doNewContextForScopeS:(ComposeAppKoin_coreScope *)s __attribute__((swift_name("doNewContextForScope(s:)")));
@property (readonly) id<ComposeAppKotlinKClass> clazz __attribute__((swift_name("clazz")));
@property (readonly) NSString *debugTag __attribute__((swift_name("debugTag")));
@property (readonly) ComposeAppKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) ComposeAppKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) id<ComposeAppKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) ComposeAppKoin_coreScope *scope __attribute__((swift_name("scope")));
@property ComposeAppKoin_coreTypeQualifier * _Nullable scopeArchetype __attribute__((swift_name("scopeArchetype")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface ComposeAppKotlinByteIterator : ComposeAppBase <ComposeAppKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface ComposeAppKotlinMatchGroup : ComposeAppBase
- (instancetype)initWithValue:(NSString *)value range:(ComposeAppKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKotlinMatchGroup *)doCopyValue:(NSString *)value range:(ComposeAppKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface ComposeAppKotlinIntProgressionCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface ComposeAppKotlinIntIterator : ComposeAppBase <ComposeAppKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface ComposeAppKotlinIntRangeCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) ComposeAppKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol ComposeAppKoin_coreKoinComponent
@required
- (ComposeAppKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol ComposeAppKoin_coreKoinScopeComponent <ComposeAppKoin_coreKoinComponent>
@required
@property (readonly) ComposeAppKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface ComposeAppKoin_coreExtensionManager : ComposeAppBase
- (instancetype)initWith_koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<ComposeAppKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<ComposeAppKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<ComposeAppKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface ComposeAppKoin_coreInstanceRegistry : ComposeAppBase
- (instancetype)initWith_koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(ComposeAppKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) ComposeAppKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, ComposeAppKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreOptionRegistry")))
@interface ComposeAppKoin_coreOptionRegistry : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface ComposeAppKoin_corePropertyRegistry : ComposeAppBase
- (instancetype)initWith_koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCoreResolver")))
@interface ComposeAppKoin_coreCoreResolver : ComposeAppBase
- (instancetype)initWith_koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)addResolutionExtensionResolutionExtension:(id<ComposeAppKoin_coreResolutionExtension>)resolutionExtension __attribute__((swift_name("addResolutionExtension(resolutionExtension:)")));
- (id _Nullable)resolveFromContextScope:(ComposeAppKoin_coreScope *)scope instanceContext:(ComposeAppKoin_coreResolutionContext *)instanceContext __attribute__((swift_name("resolveFromContext(scope:instanceContext:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface ComposeAppKoin_coreScopeRegistry : ComposeAppBase
- (instancetype)initWith_koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<ComposeAppKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) ComposeAppKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<ComposeAppKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface ComposeAppKoin_coreLevel : ComposeAppKotlinEnum<ComposeAppKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) ComposeAppKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) ComposeAppKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) ComposeAppKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) ComposeAppKoin_coreLevel *none __attribute__((swift_name("none")));
+ (ComposeAppKotlinArray<ComposeAppKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface ComposeAppKoin_coreKind : ComposeAppKotlinEnum<ComposeAppKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) ComposeAppKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) ComposeAppKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (ComposeAppKotlinArray<ComposeAppKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKoin_coreKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface ComposeAppKoin_coreCallbacks<T> : ComposeAppBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol ComposeAppKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(ComposeAppKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((swift_name("Koin_coreResolutionExtension")))
@protocol ComposeAppKoin_coreResolutionExtension
@required
- (id _Nullable)resolveScope:(ComposeAppKoin_coreScope *)scope instanceContext:(ComposeAppKoin_coreResolutionContext *)instanceContext __attribute__((swift_name("resolve(scope:instanceContext:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface ComposeAppKoin_coreScopeRegistryCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
