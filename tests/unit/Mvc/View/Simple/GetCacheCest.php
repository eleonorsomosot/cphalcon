<?php
declare(strict_types=1);

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalconphp.com>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

namespace Phalcon\Test\Unit\Mvc\View\Simple;

use UnitTester;

/**
 * Class GetCacheCest
 */
class GetCacheCest
{
    /**
     * Tests Phalcon\Mvc\View\Simple :: getCache()
     *
     * @param UnitTester $I
     *
     * @author Phalcon Team <team@phalconphp.com>
     * @since  2018-11-13
     */
    public function mvcViewSimpleGetCache(UnitTester $I)
    {
        $I->wantToTest('Mvc\View\Simple - getCache()');
        $I->skipTest('Need implementation');
    }
}
